#include "box.h"
using namespace std;

Box::Box(){
  for(int i = 0; i < 11; i++){
    tab[i] = 0;
  }
}

bool Box::close(int i1, int i2, int i3){
  bool pass = true;
  tab[0] = 0;
  
  if(tab[i1] == 1){pass=false;}
  if(tab[i2] == 1){pass=false;}
  if(tab[i3] == 1){pass=false;}
  
  if(pass){
  tab[i1] = 1;
  tab[i2] = 1;
  tab[i3] = 1;
  }
  
  return pass;
}

int Box::score() const{
  int total =0;
  for (int i = 0; i < 11; i++){
    total += i * tab[i];
  }
  return total;
}

string Box::str(){
  string o = "";
  for(int i= 1; i < 10;i++){
    if(tab[i] == 0){
      o += to_string(i);
    }
    else{
      o += "*";
    }
    o += " ";
  }
  return o;
}

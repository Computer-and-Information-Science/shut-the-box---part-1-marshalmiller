#include <iostream>
#include "box.h"

using namespace std;

int main() {
  Box b1;
  cout << b1.str() << "\n";
  b1.close(2,4,6);
  cout << b1.str() << "\n";
  b1.close(0,0,7);
  cout << b1.str() << "\n";
  b1.close(1,4,9);
  cout << b1.str() << "\n";
  cout << to_string(b1.score()) << " -score" <<"\n";
}

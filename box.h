#include <string>

class Box{
  private:
  int tab[11];
  public:
  Box();
  bool close(int i1, int i2,int i3);
  int score() const;
  std::string str();

};

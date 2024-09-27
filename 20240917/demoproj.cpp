#include "demoproj.hpp"

int main() {
  int x = 3;
  int y = 7;
  functionSwap(x,y);
  int z = x*y;
  std::cout << "x: " << x << '\n';
  std::cout << "y: " << y << '\n';
  std::cout << "z: " << z << '\n';
  return 7;
}

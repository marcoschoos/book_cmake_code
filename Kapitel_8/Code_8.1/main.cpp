#include <iostream>

int main() {
  int unused;
  int position[2] = {1, 2};

  auto [x, y] = position;

#ifdef PRINT
  std::cout << x << " " << y << std::endl;
#else
  std::cout << "PRINT not defined." << std::endl;
#endif

  return 0;
}

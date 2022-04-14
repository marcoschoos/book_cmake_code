#include <gsl/gsl>
#include <iostream>

int rechtecks_flaeche(int a, int b) {
  Expects(a >= 0);
  Expects(b >= 0);

  return a * b;
}

int main() {
  std::cout << rechtecks_flaeche(6, 2) << std::endl;
  std::cout << rechtecks_flaeche(4, 2) << std::endl;
  std::cout << rechtecks_flaeche(4, -2) << std::endl;

  return 0;
}

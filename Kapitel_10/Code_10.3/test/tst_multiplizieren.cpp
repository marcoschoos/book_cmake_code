#include "mathe.h"

#include <iostream>

int main() {
  Mathe math;

  if (math.multiplizieren(2, 3) == 6) {
    std::cout << "Test erfolgreich" << std::endl;
    return 0;
  }

  return 1;
}

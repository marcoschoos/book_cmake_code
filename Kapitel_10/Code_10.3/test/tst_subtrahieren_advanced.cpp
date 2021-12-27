#include "mathe.h"

#include <iostream>

int main() {
  Mathe math;

  if (math.subtrahieren_advanced(7, 4, 2) == 1) {
    std::cout << "Test erfolgreich" << std::endl;
    return 0;
  }

  return 1;
}

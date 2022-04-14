#include "mathe.h"

#include <iostream>

int main() {
  Mathe math;

  if (math.subtrahieren(4, 2) == 2) {
    std::cout << "Test erfolgreich" << std::endl;
    return 0;
  }

  return 1;
}

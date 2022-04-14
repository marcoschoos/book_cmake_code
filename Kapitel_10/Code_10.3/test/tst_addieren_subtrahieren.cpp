#include "mathe.h"

#include <iostream>

int main() {
  Mathe math;

  if (math.addieren_subtrahieren(2, 3, 4) == 1) {
    std::cout << "Test erfolgreich" << std::endl;
    return 0;
  }

  return 1;
}

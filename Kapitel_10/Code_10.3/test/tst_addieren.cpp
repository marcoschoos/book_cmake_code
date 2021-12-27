#include "mathe.h"

#include <iostream>

int main() {
  Mathe math;

  if (math.addieren(2, 3) == 5) {
    std::cout << "Test erfolgreich" << std::endl;
    return 0;
  }

  return 1;
}

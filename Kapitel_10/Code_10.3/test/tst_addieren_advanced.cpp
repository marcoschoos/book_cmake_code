#include "mathe.h"

#include <iostream>

int main()
{
    Mathe math;

    if (math.addieren_advanced(2, 3, 4) == 9) {
        std::cout << "Test erfolgreich" << std::endl;
        return 0;
    }

    return 1;
}

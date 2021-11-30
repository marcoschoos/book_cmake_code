#include <chrono>
#include <cmath>
#include <iostream>

void mathe_funktion(int i)
{
    double x;
    x = std::sqrt(std::exp(i)) * std::cos(i);
    x += std::sin(std::exp(i));
    x += std::sqrt(std::sin(std::exp(i)));
}

int main()
{
    auto startzeit = std::chrono::high_resolution_clock::now();

    for (size_t i = 0; i < 5e7; i++) {
        mathe_funktion(i);
    }

    auto endzeit = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> dauer = endzeit - startzeit;

    std::cout << "Die for-Schleife lief: " << dauer.count() << " s\n";

    return 0;
}

// Control para la función compute_tax()

#include <iostream>
#include <iomanip>
#include "CmpTaxAm.h"

// Prototipo
float compute_tax(float);

int main()
{
    const int sentinel = -1;
    float my_income;
    float my_tax;

    // Manipuladores de salida
    std::cout << std::setiosflags(std::ios::fixed | std::ios::showpoint)
              << std::setprecision(2);

    // Test de la función compute_tax(): todas las posibilidades
    std::cout << "Driver program for function 'compute_tax()'" << '\n';
    std::cout << "Enter income greater than zero (or -1 to stop test): ";
    std::cin >> my_income;

    while (my_income != sentinel) {

        my_tax = compute_tax(my_income);

        if (my_tax >= 0.0) {
        std::cout << "The tax on $" << my_income;
        std::cout << " is $" << my_tax << '\n';
    } else {
        std::cout << "Income $ " << my_income << " was negative. ";
        std::cout << "Try another value." << '\n';
    }

    std::cout << '\n' << '\n';
    std::cout << "Enter income greater than zero (or " << sentinel \
              << " to stop test): ";
    std::cin >> my_income;
    }
    std::cout << "A " << sentinel << " was entered. " \
              << "Test execution terminated." << std::endl;
    return 0;

}

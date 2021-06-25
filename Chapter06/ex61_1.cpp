// Escribir un controlador para la función 'hypot()'

#include <iostream>
#include <iomanip>
#include "hipot.h"

// Prototipo de la función
double hipot(double, double);

int main()
{
    double number1, number2, hip;

    std::cout << "Introduzca los valores de los catetos: ";
    std::cin >> number1 >> number2;

    // Analiza si los números son positivos
    if ((number1 < 0) || (number2 < 0)) {
            std::cout << "Los números han de ser positivos!" << '\n';
            std::cout << "Pruebe otra vez." << '\n';
            return 0;
            }

    hip = hipot(number1, number2); // Calcula la hipotenusa

    std::cout << "La hipotenusa vale: " << std::setprecision(3) 
              << hip << '\n';

    return 0;
}

// Escribir un programa que muestre todas las potencias de un número entero
// introducido por el usuario por debajo de un tope predefinido y reflejadas
// en una tabla.

#include <iostream>
#include <cmath>  // pow(x,y);
#include <iomanip>

int main()
{
    int number;
    const int max_power = 5;
    int count = 0;
    float result;

    std::cout << "Introduzca un número (1-10): ";
    std::cin >> number;
    std::cout << "Potencias de " << number << " de 0 a 5..." << '\n';
    std::cout << " |---------|" << '\n';

    while ((count <= max_power) && (number <= 10)) {
        result = pow(number, count++); // count++;
        std::cout << std::setw(2) << count << std::setw(10) << result << '\n';
    }
    return 0;
}




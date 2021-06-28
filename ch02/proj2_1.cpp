// Escribir un programa para convertir una temperatura dada en grados
// Fahrenheit a grados Celsius. Para elllo utilizar la fórmula:
//
//      celsius = (5 / 9) * (fahrenheit - 32)
//
#include <iostream>

int main()

{
    int fahr;
    float celsius;

    std::cout << "Introduce los grados fahrenheit: "; 
    std::cin >> fahr;

    celsius = (5.0 / 9.0) * ((float)fahr - 32.0); // Todo a tipo float

    std::cout << "Los grados celsius son:  " << celsius << std::endl;

    return 0;

            
}


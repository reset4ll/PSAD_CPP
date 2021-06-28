// Escribir un programa que lea dos números enteros e imprima la suma,
// diferencia, producto y cocientes entero y decimal.
//
#include <iostream>

int main()
{
    int x, y;
    float cociente;

    std::cout << "Introduce dos números enteros: ";
    std::cin >> x >> y;
    
    std::cout << "la suma es: " << (x + y) << std::endl;
    std::cout << "la diferencia: " << (x - y) << std::endl;
    std::cout << "el producto es: " << (x * y) << std::endl; 
    std::cout << "el cociente es: " << (x / y) << std::endl; // Parte entera

    cociente = (float)x / (float)y; // Casting los enteros a decimal
    std::cout << "el cociente decimal es: " << cociente << std::endl;
    
    return 0;
}

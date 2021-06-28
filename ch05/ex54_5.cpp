// Escribir un programa con un bucle controlado por un 'flag' que introduzca
// un par de números enteros hasta que el segundo número sea divisible por el
// segundo.

#include <iostream>

int main()
{
    int number1, number2;
    int result = 0;

    while (!result) {
        std::cout << "Introduzca dos números enteros: ";
        std::cin >> number1 >> number2;
        result = number1 /  number2;
    }   // Fin while
    return 0;
}







// Escribir una función que eleve un número 'double'(X) a una potencia 'int'(N)
//  al multiplicar X por si mismo N veces usando un 'for' loop.
//  Para hacer que la función funcione para valores negativos de N usar la 
//  función 'abs(N)' como la expresión final del bucle 'for'

#include <iostream>
#include <iomanip>
#include <cmath>

// Prototipo de la función
double my_pow(double, int);


int main()
{
    int index;  // Itereador

    for (index = 0; index <= 5; ++index)  // Cinco números

    // Función my_pow() :: base (+,-) y exp (+)
    std::cout << "Index: " << index << " -> " << "my_pow(2,exp): " \
              << my_pow(2,index) << std::setw(5)  << " -> " << "my_pow(2,-exp): "  \
              << my_pow(2,-index) << std::setw(6) << '\n';

    std::cout << "----------" << '\n';

    // Función pow() :: test my_pow() 
    for (index = 0; index <= 5; ++index)  // Cinco números
      
    std::cout << "Index: " << index << " -> " << "pow(2,exp): " \
              << pow(2,index) << std::setw(5)  << " -> " << "pow(2,-exp): "  \
              << pow(2,-index) << std::setw(6) << '\n';
    
    return 0;
}

// Definición de my_pow()
double my_pow(double base, int exp)
{
    int index;
    double potencia = 1;

    for (index = 1; index <= exp; ++index)
        potencia *= base;
    return potencia;
}

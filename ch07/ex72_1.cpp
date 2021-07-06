// Escribir un programa que muestre en pantalla el valor entero  y flotante más
// grande usado en el sistema actual

#include <iostream>
#include <climits>
#include <cfloat>

int main()
{
    std::cout << "El valor entero más grande es: " << INT_MAX << '\n';
    std::cout << "El valor flotante más grande es: " << FLT_MAX << '\n';

    return 0;
}

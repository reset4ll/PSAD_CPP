// Escribir un 'bucle while' que muestre en pantalla cada uno de los enteros
// entre 1-5 con su correspondiente cuadrado cada uno en una línea diferente.

#include <iostream>

int main()
{
    int numero = 1;

    while (numero <= 5)
    {
        std::cout << "El cuadrado de " << numero << " es " \
                  << numero * numero << std::endl;
                  numero++;
    }   // Fin while

    return 0;
}

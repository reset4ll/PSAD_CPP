// Escribir un bucle 'while' que muestre en pantalla cada uno de los enteros
// en el rango -2/+3 cada uno en una linea separada.

#include <iostream>

int main()
{
    int numero = -2;

    while (numero <= 3) {
        std::cout << "Numero: " << numero << std::endl;
        numero++;
    }   // Fin while

    return 0;
}

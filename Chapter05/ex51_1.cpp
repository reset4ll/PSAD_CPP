// Escribir un 'bucle while' que muestre en pantalla cada uno de los enteros
// entre 1-5 con su correspondiente cuadrado cada uno en una línea diferente.

#include <iostream>

int get_square(int);  // Prototipo

int main()
{
    int cuadrado;
    int numero = 1;

    while (numero <= 5) {
        cuadrado = get_square(numero);
        std::cout <<" El cuadrado de " << numero << " es " << cuadrado << "\n";
        numero++;
    }   // Fin while

    return 0;
}

// Obtiene el cuadrado del número
int get_square(int numero)
{
    return numero * numero;
}




// Escribir un programa que recorra una secuencia de números enteros positivos
// leídos como datos hasta que alcance un valor negativo. Escribir las dos
// versiones 'do-while' y 'while'.

#include <iostream>

int main()
{
    int numero;

    std::cout << "Introduzca un número entero positivo: ";
    std::cin >> numero;

    // Bucle 'while'
    while (numero >= 0) {
        std::cout << "\nEstamos en el bucle 'while'..." << '\n';
        std::cout << "Ha introducido el número: " << numero << '\n';
        std::cout << "Introduzca otro número positivo: ";
        std::cin >> numero;
        std::cout << '\n';
    }   // Si el número es negativo salta al bucle 'do-while'

    // Bucle 'do-while'
    do {
        std::cout << "Ahora estamos en el bucle 'do-while'..." << '\n';
        std::cout << "Introdujo el número: " << numero << '\n';
        std::cout << "Vuelva a introducir otro número positivo: ";
        std::cin >> numero;
        std::cout << '\n';
    }   while (numero >= 0);

    return 0;
}

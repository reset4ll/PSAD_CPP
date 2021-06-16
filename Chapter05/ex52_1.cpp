// Escribir un programa que calcule y muestre en pantalla la secuencia
// '1 + 2 + 3 + ... + (n - 1) + n', donde 'n' es un valor de dato.

#include <iostream>

int main()
{
    int dato;
    int resultado = 1;
    const char signo = '+'; // Tratada como variable aislada

    std::cout << "Introduzca un valor de dato: ";
    std::cin >> dato;

    while (resultado <= dato) {
        std::cout << resultado;
        if (resultado < dato) {  // Filtro para evitar el
        std::cout << signo;      // último '+' del bucle
        }
        resultado++;
    }   // Fin while

        std::cout << '\n';
        return 0;
}

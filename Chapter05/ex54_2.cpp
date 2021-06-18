// Escribir un programa que permita al usuario introducir valores e imprima
// su valor positivo o negativo, según proceda. Usar '0' como centinela.

// Prototipo
float get_inverso(float);

#include <iostream>

int main()
{
    float number = -1;
    float inverso;

    while (number != 0) {  // Valor centinela
        std::cout << "Introducir un number positivo o negativo y [0] " \
        << "para acabar: ";
        std::cin >> number;
        inverso = get_inverso(number);  // LLamada a get_inverso()
    }   // Fin while
    return 0;
}

// Obtiene el inverso del número introducido y lo visualiza
float get_inverso(float number)
{
        float inverso;

        if (number > 0) {
            inverso = number * (-1);
            std::cout << "El valor negativo es: " << inverso << '\n';
            return inverso;
        }
        else if (number < 0) {
            inverso = number * (-1);
            std::cout << "El valor positivo es: " << inverso << '\n';
            return inverso;
        }
}


// Crear la figura mostrada en el libro.
//
//  1
//  12
//  123
//  1234
//  123
//  12
//  1
//

#include <iostream>

int main()
{
    int step = 6;
    const int number_lines = 7;
    const char dig1 = '1';
    const char dig2 = '2'; // Caracteres a imprimir
    const char dig3 = '3'; // la figura
    const char dig4 = '4';

        std::cout << '\n';

        for (int fila = 1; fila <= (number_lines - step); fila++)
        std::cout << dig1 << '\n';
        step--;

        for (int fila = 2; fila <= (number_lines - step); fila++)
        std::cout << dig1 << dig2 << '\n';
        step--;

        for (int fila = 3; fila <= (number_lines - step); fila++)
        std::cout << dig1 << dig2 << dig3 << '\n';
        step--;

        for (int fila = 4; fila <= (number_lines - step); fila++)
        std::cout << dig1 << dig2 << dig3 << dig4 << '\n';
        step--;

        for (int fila = 5; fila <= (number_lines - step); fila++)
        std::cout << dig1 << dig2 << dig3 << '\n';
        step--;

        for (int fila = 6; fila <= (number_lines - step); fila++)
        std::cout << dig1 << dig2 << '\n';
        step--;

        for (int fila = 7; fila <= number_lines; fila++)
        std::cout << dig1 << '\n';

        std::cout << '\n';

    return 0;
}


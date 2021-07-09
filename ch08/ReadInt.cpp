// Lee carácteres consecutivos y los convierte a enteros

#include <iostream>
#include <cctype>    // isdigit()

void read_int(int& integer_value)       // Valor entero convertido
{
    const int base = 10;                // Sistema base del número
    const char nwln = '\n';             // Carácter nueva línea

    char next;                          // Cada uno de los carácteres leídos
    int digit;                          // Valor de cada carácter numérico

    // Instrucciones al usuario
    cout << "Introduzca una línea de caracteres seguida por <return>" << '\n';

    // Acumula el valor numérico de los dígitos en 'integer_value'
    integer_value = 0;
    cin.get(next);

    while (next != nwln) {

        if (isdigit(next)) {

            digit = int(next) - int('0');  // Obtiene el valor del dígito
            integer_value = base * integer_value + digit;
        }
        cin.get(next);                    // Obtiene el siguiente carácter
    }
    return;
}

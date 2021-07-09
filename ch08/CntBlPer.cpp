// Cuenta el número de espacios en blanco en cada línea de un fichero.

#include <iostream>

using namespace std;

int main()
{
    const char blank = ' ';  // Carácter para ser contado
    const char nwln = '\n';  // Carácter de nueva línea

    char next;               // Siguiente carácter en la ínea actual
    int blank_count;         // Número de espacios en blanco en la línea actual
    int line_count;          // Mantiene el control de número de líneas

    line_count = 0;
    cin.get(next);           // Obtiene el primer carácter de nueva línea

    while (!cin.eof()) {

        blank_count = 0;    // Inicializa cuenta de espacios en blanco

        while ((next != nwln && !cin.eof())) {
        cout.put(next);
        if (next == blank)
            blank_count++;  // Incrementa la cuenta de espacios en blanco
        cin.get(next);      // Obtiene el siguiente carácter
    }

    cout.put(nwln);         // Marca el fin de la actual línea
    line_count++;
    cout << "El número de espacios en blanco es: " << blank_count << '\n';
    cin.get(next);          // Obtiene el siguiente carácter
    }

    // Salida EOF: ctrl-D
    cout << "El número de líneas procesadas es: " << line_count << '\n';


    return 0;
}

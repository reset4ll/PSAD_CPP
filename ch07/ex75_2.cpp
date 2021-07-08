// Escribir la función 'write_day()' para una enumeración de tipo 'day'

#include <iostream>

using namespace std;

int main()
{
    // Declara tipo enumerador 'day'
    enum day { lunes, martes, miercoles, jueves, viernes, sabado, domingo };

    // Definición de función 'write_day()'
    int write_day(day current_day)  // Declara variable 'current_day'
    {
        int status = 1;  // Indica si la función se ejecutó correctamente

        switch (current_day) {

        case lunes:
            cout << "lunes" << '\n';
            break;
        case martes:
            cout << "martes" << '\n';
            break;
        case miercoles:
            cout << "miércoles" << '\n';
            break;
        case jueves:
            cout << "jueves" << '\n';
            break;
        case viernes:
            cout << "viernes" << '\n';
            break;
        case sabado:
            cout << "sabado" << '\n';
            break;
        case domingo:
            cout << "domingo" << '\n';
            break;
        default:
            status = 0;
            cerr << "ERROR: Día inválido de la semana!" << '\n';
        }
        return status;
    }
}

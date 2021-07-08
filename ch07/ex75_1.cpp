// Dado el tipo de enumeración 'months', reescribir las declaraciones 'if'
// asumiendo que 'current_month' es de tipo 'months' en vez de tipo 'int'.
// Escribir también la declaración 'switch' equivalente.

#include <iostream>

using namespace std;

int main()
{
    // Declara el tipo de enumeración 'months'
    enum months { enero = 1, junio = 6, septiembre = 9, diciembre = 12 };

    months current_monts;  // Declara la variable de tipo 'months'

    // Usando 'else-if'
    if (current_month == enero) {
        cout << "Feliz año nuevo!" << '\n';
        return;
        }
    else if (current_month == junio) {
        cout << "Comienza el verano" << '\n';
        return;
        }
    else if (current_month == septiembre) {
        cout << "Vuelta al colegio" << '\n';
        return;
        }
    else if (current_month == diciembre) {
        cout << "Felices fiestas!" << '\n';
        return;
        }
    else
        cout << "Mes incorrecto!" << '\n';


    // Usando 'switch'
    switch (current_month) {

    case enero:
        cout << "Feliz año nuevo!" << '\n';
        break;
    case junio:
        cout << "Comienza el verano" << '\n';
        break;
    case septiembre:
        cout << "Vuelta al colegio" << '\n';
        break;
    case diciembre:
        cout << "Felices fiestas!" << '\n';
        break;
    default:
        cout << "Mes incorrecto!" << '\n';
    }

    return 0;
}

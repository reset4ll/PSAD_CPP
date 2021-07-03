// Escribir una función que muestre enn pantalla una tabla con todas las potencias
// de su primer argumento de tipo 'int' desde cero hasta la potencia marcada por
// su segundo argumento también detipo 'int'. La función debería devolver la suma
// de todas las potencias y mostrarlas en pantalla.

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

// Prototipo
void sum_pow(int, int, int&);

int main ()
{
    int base, exp;
    int sum = 0;

    cout << "Introducir la base de la potencia: ";
    cin >> base;
    cout << "Introducir el exponente máximo de potencias a sumar: ";
    cin >> exp;

    sum_pow(base, exp, sum);  // Llamada a sum_pow()
    cout << "La suma total de potencias es de: " << sum << '\n';

    return 0;
}

// Definición de sum_pow()
void sum_pow(int base, int exp, int& sum)
{
    for (int index = 0; index <= exp; ++index)
    {
        sum += pow(base, index);  // Suma las potencias
    }
}

// Escribir una función que muestre enn pantalla una tabla con todas las potencias
// de su primer argumento de tipo 'int' desde cero hasta la potencia marcada por
// su segundo argumento también detipo 'int'. La función debería devolver la suma
// de todas las potencias y mostrarlas en pantalla.

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

// Prototipos
void pow_table(int, int);
void sum_pow(int, int, int&);

int main ()
{
    int base, expo;
    int sum = 0;

    cout << "Introducir la base de la potencia: ";
    cin >> base;
    cout << "Introducir el exponente máximo de potencias a sumar: ";
    cin >> expo;

    pow_table(base, expo);  // Llamada por valor a pow_table()
    sum_pow(base, expo, sum);  // Llamada usando referencia a sum_pow()
    cout << "\nLa suma total de potencias es de: " << sum << '\n';

    return 0;
}


// Definición de pow_table()
void pow_table(int base, int expo)
{
    int result = 0;
    cout << "\nTabla de potencias:\n";
    cout << "----- -- ----------\n";
    cout << setw(4) << "EXP" << setw(12) << "POW()" << '\n';

    for (int index = 0; index <= expo; ++index)
    {
        result = pow(base, index);  // Calcula la potencia
        cout << setw(3) << index << setw(12) << result << '\n';
    }
}

// Definición de sum_pow()
void sum_pow(int base, int expo, int& sum)
{
    for (int index = 0; index <= expo; ++index)
    {
        sum += pow(base, index);  // Suma las potencias
    }
}

// Escribir una función que tome dos argumentos 'int' como entrada y devuelva
// un valor de 1 (true) cuando el valor de su primer argumento 'm' sea un
// divisor de 'n' y 0 (false) en caso contrario.

#include <iostream>

using namespace std;

// Prototipo
int divisor (int, int);

int main()
{
    int m, n;
    cout << "Introducir valores de 'm' y 'n': ";
    cin >> m >> n;

    // Test
    if (divisor(m,n)) {
        cout << "Divisible" << '\n';
    } else {
        cout << "No divisible" << '\n';
    } //endif

    return 0;
}

// Definición
int divisor(int m, int n)
{
    // Usando '%'
    if (m % n == 0) {
        return 1;
    } else {
        return 0;
    } //endif

}

// Escribir la función del ejercicio 4 de revisión de la sección 6.4

#include <iostream>
#include <iomanip>

using namespace std;

// Prototipo
void sum_diff( int, int, int&, int&);

int main()
{
    int w, x, y, z;

    x = 5; y = 3; z = 7; w = 9;

    // Llamadas de la función
    cout << "   x   y   z   w  " << '\n';
    sum_diff(x, y, z, w);
    cout << setw(4) << x << setw(4) << y << setw(4) << z << setw(4) \
         << w << setw(4) << '\n';

    sum_diff(y, x, z, w);
    cout << setw(4) << y << setw(4) << x << setw(4) << z << setw(4) \
         << w << setw(4) << '\n';

    sum_diff(z, w, y, x);
    cout << setw(4) << z << setw(4) << w << setw(4) << y << setw(4) \
         << x << setw(4) << '\n';

    return 0;
}

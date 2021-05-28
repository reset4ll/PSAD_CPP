// Escribe una declaración de C++ que muestre el valor de "x" tal como
// se indica en la línea inferior:
//
// El valor de x es ___________
//
#include <iostream>

int main()
{
    int x;

    std::cout << "Introduce el valor de x: ";
    std::cin >> x; 

    std::cout << "El valor de x es " << x << std::endl;

    return 0;
}

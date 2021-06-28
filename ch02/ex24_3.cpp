// Escribir un programa que pida al usuario que introduzca el radio de un
// círculo para computar y mostrar su area y circunferencia.
// Para ello usar las fórmulas:
//      area = PI * r^2;
//      circunferencia = 2 * PI * r;
//
#include <iostream>

int main()
{
    const float PI = 3.14; /* Usando dos decimales */
    
    int radio;
    float area, circunferencia;
    

    std::cout << "Introduce el radio del círculo: "; 
    std::cin >> radio;

    area = PI * (radio * radio);
    circunferencia = 2 * PI * radio;  

    std::cout << "El area del círculo es: " << area << std::endl;
    std::cout << "La circunferencia del círculo es: " \
              << circunferencia << std::endl;

    return 0;
}

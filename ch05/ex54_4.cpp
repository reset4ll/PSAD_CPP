// Escribir un programa que muestre en pantalla una tabla de medidas angulares
// con sus valores de 'seno' y 'coseno'.

#include <iostream>
#include <cmath>
#include <iomanip>

int main()
{
    float initial_degree = 0;
    float final_degree = 360;
    const float step_degree = 30;  // Cada 30º angulares
    const float PI = 3.1416;
    float sin_result, cos_result;

    // Header
    std::cout << "*******     *****       *****" << '\n';
    std::cout << "degreeº     sin()       cos()" << '\n';
    std::cout << "*******     *****       *****" << '\n';

    while (initial_degree <= final_degree) {

        sin_result = sin(initial_degree * PI / 180); // Cálculo sin()
        cos_result = cos(initial_degree * PI / 180); // Cálculo cos()
        // Salida ajustada
        std::cout << std::setiosflags(std::ios::showpoint | std::ios::fixed);
        std::cout << std::setw(5) << std::setprecision(1) \
                  << initial_degree << "º" \
                  << std::setw(12) << std::setprecision(5) << sin_result \
                  << std::setw(12) << std::setprecision(5) << cos_result \
                  << '\n';
        initial_degree += step_degree;  // Intervalo
    }   // fin while
    return 0;
}

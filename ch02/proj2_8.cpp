// Escribir un programa que lea los valores de entrada e imprima
// los valores del triple generado por el teorema de Pitágoras.
//
//  /* Sabiendo que dados dos enteros positivos (m) > (n) 
//   * Lado1 = (m2 - n2);
//   * Lado2 = 2 * m * n;
//   * Hipotenusa = sqrt(m2 + n2);
//   */
//
#include <iostream>
#include <cmath>

int main()
{
    int num1, num2, lado1, lado2;
    float hipotenusa;

    std::cout << "Introduce dos enteros positivos (m>n): ";
    std::cin >> num1 >> num2;

    lado1 = (num1 * num1) - (num2 * num2);
    std::cout << "Un lado del triangulo mide: " << lado1 << std::endl;

    lado2 = (num1 * num2) * 2;
    std::cout << "Otro lado del triangulo mide: " << lado2 << std::endl;

    hipotenusa = sqrt((num1 * num1) + (num2 * num2)); /* Raíz cuadrada */
    std::cout << "La hipotenusa mide: " << hipotenusa << std::endl;
    std::cout << "El triple de Pitágoras es: " \
              << lado1 << "  " \
              << lado2 << "  " \
              << hipotenusa << std::endl;
    
    return 0;
}

// Escribir un programa que lea los númeradores y denominadores de dos
// fracciones e imprima su producto como fracción y como porcentaje.
// 
//  Producto de dos fracciones: (a / b) * (c / d) = (a * c) / (b * d);
//
#include <iostream>

int main()
{
    int num1, num2, den1, den2;
    float numerador, denominador;
    float porcentaje;

    std::cout << "Introduce numerador y denominador (fraccion A): "; 
    std::cin >> num1 >> den1;
    std::cout << "Introduce numerador y denominador (fraccion B): ";
    std::cin >> num2 >> den2;

    numerador = num1 * num2;
    denominador = den1 * den2;

    std::cout << "La fraccion resultante de la multiplicacion es: ";  
    std::cout << numerador << "/" << denominador << std::endl;
    
    /* Para truncar los decimales hacemos un casting a (int) */
    porcentaje = (int) ((numerador / denominador) * 100);

    std::cout << "El porcentaje resultante es: ";
    std::cout << porcentaje << "%" << std::endl;

    return 0;
}

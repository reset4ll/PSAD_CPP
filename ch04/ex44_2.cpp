// Escribir un programa interactivo que contenga un 'if' compuesto y
// pueda ser usado para computar el area de un cuadrado o de un triángulo
// dada la respuesta del usuario al introducir el primer carácter del
// nombre de la figura 't' o 's'.
//
// Area de un cuadrado = lado * lado;
// Area de un triángulo = (base * altura) / 2;
//
#include <iostream>

int main()
{
    char letra;
    float lado, base, altura;
    float area_cuadrado, area_triangulo;

    std::cout << "Introduzca la letra (c)uadrado o (t)riangulo para determinar" << std::endl;
    std::cout << "el area de la figura a buscar: ";
    std::cin >> letra;

    if (letra == 'c') // Buscaremos el área del cuadrado
    {
        std::cout << "Introduzca el lado del cuadrado: ";
        std::cin >> lado;
        area_cuadrado = lado * lado;
        std::cout << "El area del cuadrado es: " << area_cuadrado << std::endl;
    }
    else // Búscaremos el área del triángulo
    {
        std::cout << "Introduzca la base y la altura del triángulo: ";
        std::cin >> base >> altura;
        area_triangulo = (base * altura) / 2;
        std::cout << "El area del triangulo es: " << area_triangulo << std::endl;
    }
    
    return 0;
}

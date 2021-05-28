// Escribir un programa que lea el peso en libras de un objeto y compute  
// e imprima su peso en kilogramos y gramos.
//
//      /*  1 libra = 0.453592 kgs = 453.59237 grs */

#include <iostream>

int main()
{
    float pesoKilos, pesoGramos;
    int libra;

    std::cout << "Introduce el peso en libras: ";
    std::cin >> libra;

    pesoKilos = libra * 0.453592;
    pesoGramos = libra * 453.60; 
   
    std::cout << "El peso en kilos es: " << pesoKilos << std::endl;
    std::cout << "El peso en gramos es: " << pesoGramos << std::endl;

    return 0;
}

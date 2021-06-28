// Escribir un programa que muestre un mensaje que conste de tres bloques de
// letras donde cada letra sea una 'X' o una 'O'. Los datos del usuario del
// programa determina si una letra en particular será una 'X o una 'O'.
// Por ejemplo si el usuario entra  las tres letras 'XOX' el bloque de letras
// 'XOX' será visualizado.

#include <iostream>

// Prototipo
void get_letter(char, char, char);

int main()
{
    char letter1, letter2, letter3;

    // Introducir bloque de tres letras
    std::cout << "Introduzca un bloque de tres letras aleatorias " \
                 "formado por letras 'X' u 'O': " << std::endl;
    std::cin >> letter1 >> letter2 >> letter3;

    std::cout << "---" << std::endl;
    std::cout <<"Su bloque de tres letras es: ";

    get_letter(letter1, letter2, letter3);  // Llamada a get_letter()

    return 0;
}

// Definición de la función
void get_letter(char letter1, char letter2, char letter3)
{
    std::cout << letter1 << letter2 << letter3 << std::endl;
}



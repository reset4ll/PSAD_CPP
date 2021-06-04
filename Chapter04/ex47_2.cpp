// Programa para encontrar la última letra alfabéticamente

#include <iostream>

// Prototipo
char get_last(char, char);

int main()
{
    char char1, char2, char3; // Letras para ser procesadas
    char is_last;  // Última letra ordenada alfabéticamente

    // Lee las tres letras
    std::cout << "Introduzca tres letras cualquiera: ";
    std::cin >> char1 >> char2 >> char3;

    // Guarda alfabéticamente la última de las dos en get_last()
    is_last = get_last(char1, char2);

    // Guarda alfabéticamente la última entre is_last y char3
    is_last = get_last(char3, is_last);

    // Muestra el resultado
    std::cout << is_last << " es la última letra en orden alfabético." \
              << std::endl;
}

// Definición de get_last() que encuentra la última letra de las dos
char get_last(char letter1, char letter2)
{
    if (letter1 > letter2)
        return letter1;
    else
        return letter2;
}

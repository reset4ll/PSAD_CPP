// Escribir un programa que escriba la primera alfabéticamente de 4 letras
// introducidas

#include <iostream>

// Prototipo
char get_first(char, char);

int main()
{
    char char1, char2, char3, char4; // Letras para ser procesadas
    char is_first;  // Primera letra ordenada alfabéticamente

    // Lee las tres letras
    std::cout << "Introduzca cuatro letras cualquiera: ";
    std::cin >> char1 >> char2 >> char3 >> char4;

    // Guarda alfabéticamente la primera de las dos en get_first()
    is_first = get_first(char1, char2);

    // Guarda alfabéticamente la primera entre is_first y char3
    is_first = get_first(char3, is_first);
    
    // guarda alfabéticamente la primera entre alpha_second y char4
    is_first = get_first(char4, is_first);

    // Muestra el resultado
    std::cout << is_first << " es la primera letra en orden alfabético." \
              << std::endl;
}

// Definición de first_get() que encuentra la primera letra de las dos
char get_first(char letter1, char letter2)
{
    if (letter1 < letter2)
        return letter1;
    else
        return letter2;
}

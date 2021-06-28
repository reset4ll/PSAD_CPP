// Programa para encontrar la primera letra alfabéticamente

#include <iostream>

// Prototipo
char get_first(char, char);

int main()
{
    char ch1, ch2, ch3; // Letras para ser procesadas
    char alpha_first;  // Primera letra ordenada alfabéticamente

    // Lee las tres letras
    std::cout << "Introduzca tres letras cualquiera: ";
    std::cin >> ch1 >> ch2 >> ch3;

    // Guarda alfabéticamente la primera de las dos en get_first()
    alpha_first = get_first(ch1, ch2);

    // Guarda alfabéticamente la primera entre alpha_first y ch3
    alpha_first = get_first(ch3, alpha_first);

    // Muestra el resultado
    std::cout << alpha_first << " es la primera letra en orden alfabético." \
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

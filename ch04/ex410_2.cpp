// Escribir un programa equivalente al ejercicio #1 pero con 'else-if'
// anidados en vez de 'switch'

#include <iostream>

int main()
{
    char next_ch;

    std::cout << "Introduzca el siguiente caracter: " << std::endl;
    std::cin >> next_ch;

    // Operadores
    if (next_ch == '+' || next_ch == '-' || next_ch == '*' \
       || next_ch == '/' || next_ch == '%')                       
       std::cout << "El caracter es un operador." << std::endl;   

    // Símbolos de puntuación
    else if (next_ch == ',' || next_ch == ':'   \
            || next_ch == '(' || next_ch == ')' \
            || next_ch == '{' || next_ch == '}' \
            || next_ch == '[' || next_ch == ']') 
            std::cout <<  "El caracter es un simbolo de puntuacion." << std::endl;

    // Dígitos
    else if (next_ch == (0 + '0') || next_ch == (1 + '0') || next_ch == 2 + '0' \
            || next_ch == 3 + '0' || next_ch == (4 + '0') || next_ch == 5 + '0' \
            || next_ch == 6 + '0' || next_ch == (7 + '0') || next_ch == 8 + '0' \
            || next_ch == 9 + '0')
            std::cout << "El caracter es un digito." << std::endl;   
    
    // Carácter inválido
    else   
            std::cout << "El caracter introducido es invalido." << std::endl;

    return 0;
}

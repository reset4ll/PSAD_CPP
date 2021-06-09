// Escribir una declaración 'switch' que imprima un mensaje indicando 
// si next_ch (de tipo char) es un operador símbolo (+, -, *, /, %),
// un símbolo de puntuación (, : () {} []) o un dígito. La declaración
// debería imprimir la categoría seleccionada.

#include <iostream>

int main()
{
    char next_ch;  

    std::cout << "Introduzca el siguiente caracter: " << std::endl;
    std::cin >> next_ch;

    switch(next_ch)
    {
    // Operadores
    case '+' :  case '-' : case '*' : case '/' : case '%':
          std::cout << "El caracter es un operador." << std::endl;
          break;

    // Símbolos de puntuación
    case ',' : case ':' : case '(' : case ')' : \
    case '{' : case '}' : case '[' : case ']':
          std::cout << "El caracter es un simbolo de puntuacion." << std::endl;
          break;

    // Añadimos '0' al entero para la conversión int -> char
    case (0 +'0'): case (1 +'0'): case (3 +'0'): case (4 +'0'): case (5 +'0'): \
    case (6 +'0'): case (7 +'0'): case (8 +'0'): case (9 +'0'):
          std::cout << "El caracter es un digito." << std::endl;
          break;            

    default: 
          std::cout << "El caracter introducido es invalido!" << std::endl;
    }

    return 0;
}


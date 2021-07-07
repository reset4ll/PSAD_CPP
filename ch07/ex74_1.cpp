// Escribir un programa que pida al usuario que introduzca un 'int' de tipo
// dígito simple y se repita hasta que el usuario introduzca el elemento apropiado.
// El programa debería leer la entrada de usuario como un carácter y llamar a la
// función 'to_digit()' para verificar que un carácter-dígito fue introducido
// correctamente y devuelva su representación entera equivalente.
// EXTRA: Añadido mostrar su valor ASCII.

#include <iostream>
#include <cctype>  // isdigit()

using namespace std;

// Prototipo modificado para añadir valor ASCII
int to_digit(char, int&, int&);

int main()
{
    char digchar;
    int i, valor;

    do {
        cout << "Introduzca el carácter dígito: ";
        cin >> digchar;
    } while (!isdigit(digchar)); // Si no es un carácter-dígito

    to_digit(digchar, i, valor);
    cout << "El valor entero del dígito introducido es: " << i << '\n';
    cout << "Su valor ASCII es: " << valor << '\n';

    return 0;
}

// Definición de to_digit() modificado
int to_digit(char ch, int& i, int& valor)
{
    if (isdigit(ch))
    {
        i = int (ch) - int ('0');  // Valor entero del carácter
        valor = int (ch);  // Valor ASCII del carácter
        return 1;
    } else {
        i = -1;
        return 0;
    }
}

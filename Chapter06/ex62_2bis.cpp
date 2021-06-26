// Escribir una función que calcule la diferencia absoluta de 'A-B'
// v.2: Usando una referencia en los valores formales como valor de
// retorno de la función.

#include <iostream>

// Prototipo
void dif_abs(int, int, int&);

int main()
{
    int A, B, dif;

    std::cout << "Introduzca dos números: ";
    std::cin >> A >> B;

    dif_abs(A, B, dif);   // Cáculo usando 'dif' como 'return'

    std::cout << "La diferencia absoluta entre ambos números es: " \
              << dif << '\n';
    return 0;
}

// Calcula la diferencia absoluta
void dif_abs(int A, int B, int& dif)
{
    if (A > B) 
        dif = (A - B);
    else 
        dif = (B - A);
    
}


// Escribir una función que calcule la diferencia absoluta de 'A-B'
// v.1: Usando un valor como retorno de la función.

#include <iostream>

// Prototipo
int dif_abs(int, int);

int main()
{
    int A, B, dif;

    std::cout << "Introduzca dos números: ";
    std::cin >> A >> B;

    dif = dif_abs(A, B);   // LLamada a la función dif_abs()

    std::cout << "La diferencia absoluta entre ambos números es: " \
              << dif << '\n';
    return 0;
}

// Calcula la diferencia absoluta
int dif_abs(int A, int B)
{
    if (A > B) 
        return (A - B);
    else 
        return (B - A);
    
}


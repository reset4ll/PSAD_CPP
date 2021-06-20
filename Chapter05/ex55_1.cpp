// Modificar el programa de la figura 5.12 del libro para que la función
// principal 'main' llame a una función que implemente la inicialización
// y bucle que calcula la suma.

void get_sum(int);  // Prototipo

#include <iostream>

int main()
{
    int n;

    std::cout << "Introduzca el último número de la suma: ";
    std::cin >> n;
    get_sum(n);  // LLamada get_sum()
    return 0;
}

// Dado un número calcula, suma e imprime su resultado
void get_sum(int n)
{
    int sum = 0;
    int i;

    for (i = 1; i <= n; i++)
        sum += i;
    std::cout << "La suma es: " << sum << "." << '\n';
    return;
}

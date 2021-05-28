// Escribir un programa que sume los numeradores y denominadores de dos
// fracciones.
//      /* Usaremos dos funciones: MCD y MCM */ 
//
#include <iostream>

/* Prototipo de la función máximo común divisor */
int mcd(int, int);

/* Prototipo de la función mínimo común múltiplo */
int mcm(int, int);

int main()
{
    int num1, num2, den1, den2;
    int numerador1, numerador2, numerador, denominador;

    std::cout << "Introduce numerador y denominador (fraccion A): ";
    std::cin >> num1 >> den1;
    std::cout << "Introduce numerador y denominador (fraccion B): ";
    std::cin >> num2 >> den2;

    denominador = mcm(den1, den2);

    std::cout << "=>";
    std::cout << " El minimo comun multiplo (mcm) es: " << denominador << std::endl;
   
    /* Aplicando el mcm a las fracciones */
    numerador1 = (denominador/ den1) * num1;
    numerador2 = (denominador / den2) * num2;
    numerador = numerador1 + numerador2;

    std::cout << "=>";
    std::cout << " La fraccion resultante de la suma es: ";
    std::cout << numerador << "/" << denominador << std::endl;

    return 0;
}

/* Función mcd */
int mcd(int den1, int den2)
{
    int temp;
    while(den2 != 0){
        temp = den2;
        den2 = den1 % den2;
        den1 = temp;
    }
    return den1;
}

/* Función mcm */
int mcm(int den1, int den2){
    return (den1 * den2) / mcd(den1, den2);
}











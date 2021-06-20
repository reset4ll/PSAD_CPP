// Escribir un programa que imprima una tabla para convertir kilómetros a
// millas. Invertir el sentido de incremento.

#include <iostream>
#include <iomanip>

int main()
{
    float km, numero, milla, inv, minv;
    const float k = 0.6; // Millas por kilómetro

    std::cout << "Introduzca los kilómetros: ";
    std::cin >> numero;

    // Salida
    std::cout << std::setw(6) << "kms" \
              << std::setw(11) << "millas" << '\n';
    for (km = 1; km <= numero; km++) {
            milla = km * k;
            std::cout << std::setw(5) << km \
                      << std::setw(10) << std::setprecision(2) << milla << '\n';
    }

    std::cout << '\n';
    std::cout << " * Orden inverso * " << '\n';

    // Invertir salida
    for (inv = numero; inv >= 1; inv--) {
            minv = inv * k;
            std::cout << std::setw(5) << inv \
                      << std::setw(10) << std::setprecision(2) << minv << '\n';
    }
    return 0;
}

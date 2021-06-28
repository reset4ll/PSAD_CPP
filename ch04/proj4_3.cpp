// Escribir un programa que traduzca la entrada en grados de una brújula
// a su correspondiente direccion geográfica.

#include <iostream>

int main()
{
    float grados;
    float resultado;  // Almacena el resultado

    std::cout << "Introduzca los grados de la brujula (0º-360º): ";
    std::cin >> grados;

    if (grados <= 90)
    {
        resultado = grados;  // Noreste
        std::cout << "La direccion es: " << resultado << "ºNE";
        std::cout << std::endl;
    }

    else if (grados < 180)
    {
        resultado = 180 - grados;  // Sureste
        std::cout << "La direccion es: " << resultado << "ºSE";
        std::cout << std::endl;
    }

    else if (grados <= 270)
    {
        resultado = grados - 180;  // Suroeste
        std::cout << "La direccion es: " << resultado << "ºSW";
        std::cout << std::endl;
    }

    else if (grados < 360)
    {
        resultado = 360 - grados;  // Noroeste
        std::cout << "La direccion es: " << resultado << "ªNW";
        std::cout << std::endl;
    }

    else if (grados == 360)
    {
        resultado = 360 - grados;
        std::cout << "La direccion es: " << resultado << "ºNE";
        std::cout << std::endl;
    }

    else
        std::cout << "Error de grados! Pruebe otra vez." << std::endl;

    return 0;        
}

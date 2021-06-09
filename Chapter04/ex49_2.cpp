// Reescribir el primer ejercicio de programación pero creando 'if'
// declarativos no anidados.

#include <iostream>

int main()
{
    float nota;

    std::cout << "Introduzca la nota, por favor: ";
    std::cin >> nota;

    if (nota < 0.0)  // Nota con valor negativo
    {
        std::cout << "Error!, valor negativo de la nota." << std::endl;
        return 0;
    }

    if (nota < 1.0) // Primer rango
    {
        std::cout << "Semestre no aprobado! Registro suspendido." << std::endl;
        return 0;
    }

    if (nota < 2.0)  // Segundo rango
    {
       std::cout << "A prueba para el siguiente semestre." << std::endl;
       return 0;
    }

    if (nota < 3.0)  // Tercer rango
       return 0;

    if (nota < 3.5)  //Cuarto rango
    {
        std::cout << "En la lista del Dean para el próximo semestre." << std::endl;
        return 0;
    }

    if (nota <= 4.0)  // Quinto rango
    {
        std::cout << "Felicidades por el semestre!" << std::endl;
        return 0;
    }

    if (nota > 4.0)  // Fuera de rango
    {
        std::cout << "Error! valor de la nota fuera de rango!" << std::endl;
        return 0;
    }

    return 0;
}

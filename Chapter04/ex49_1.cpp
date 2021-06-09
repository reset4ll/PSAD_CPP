// Implementar la tabla de decisión del libro usando declaraciones 'if'
// anidadas

#include <iostream>

int main()
{
    float nota;

    std::cout << "Introduzca la nota: ";
    std::cin >> nota;

    if (nota < 0.0) // Nota negativa
    {
        std::cout << "Error!, nota por debajo de 0.0" << std::endl;
        std::cout << "Introducir de nuevo la nota. " << std::endl;
    }

    else if (nota < 1.0) // Primer rango
        std::cout << "Semestre no aprobado! Resgistro suspendido!" << std::endl;

    else if (nota < 2.0) // Segundo rango
        std::cout << "En prueba para el siguiente semestre." << std::endl;

    else if (nota < 3.0) // Tercer rango
        ;  // Declaración vacía!

    else if (nota < 3.5) // Cuarto rango
        std::cout << "En la lista del decano por el semestre." << std::endl;
    
    else if (nota <= 4.0) // Último rango
        std::cout << "Felicidades por el semestre!" << std::endl;

    else if (nota > 4.0) // Fuera del rango establecido
        std::cout << "Error! fuera de rango." << std:: endl;
}


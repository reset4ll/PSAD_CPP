// Escribir un programa que determine el coste total después de un 
// periodo de cinco años para una serie de viviendas cuyos datos
// se reflejan en el libro.

#include <iostream>

// Prototipos
void instruc_user();
float coste_final(float, float, float);

int main()
{
    float coste_inicial, aporte_anual, impuesto;
    float coste_total;

    instruc_user();
    std::cout << "---/---" << std::endl;
    std::cout << "Introduzca el coste de la vivienda inicial, su aporte anual: " << std::endl;  
    std::cout << "e impuesto añadido a modo de gravamen para la vivienda." << std::endl;
    std::cin >> coste_inicial >> aporte_anual >> impuesto;
    
    coste_total = coste_final(coste_inicial, aporte_anual, impuesto);
    std::cout << "El coste final de la vivienda al cabo "; 
    std::cout << "de cinco años es de: " << coste_total << "$"<< std::endl;
    return 0;
}

void instruc_user()
{        
    std::cout << "---/---" << std::endl;
    std::cout << "Se busca el coste total final de una vivienda " << std::endl;
    std::cout << "dado un coste inicial, aportando durante cinco años " << std::endl;
    std::cout << "una cantidad anual con un impuesto determinado. " << std::endl;
    std::cout << std::endl;
    return;
}

float coste_final( float coste_inicial, float aporte_anual, float impuesto)
{
    float impuesto_anual, coste;

    impuesto_anual = coste_inicial * impuesto;
    coste = coste_inicial + (aporte_anual * 5) + (impuesto_anual * 5);
    return coste;
}

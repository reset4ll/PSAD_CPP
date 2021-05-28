// Escribir un programa que registre el tiempo necesario para cortar 
// el césped de una area rectangular medida en yardas dadas su longitud
// y su anchura a una velocidad constante de 2 metros cuadrados por
// segundo.
//          /* constante: 1 metro = 1,196 yardas */
//          /* tiempo = espacio / velocidad */
//
#include <iostream>

int main()
{
    float largo, ancho, area, tiempo;
    const float velocidad = 2.0;

    std::cout << "Introduce la longitud y la anchura en yardas: ";
    std::cin >> largo >> ancho;
    
    /* Convertir el area dada en yardas en  metros cuadrados */
    area = (largo * ancho) * 1.196; 

    /*
     * Cálculo del tiempo para cortar el césped a una
     * velocidad constante de 2 metros por segundo.
     * 
     */
    
    tiempo = area / velocidad; /* Fórmula */
    
    std::cout << "el area en metros cuadrados es de: " \
              << area << std::endl;
    std::cout << "el tiempo en segundos para cortar el césped sería de: " \
              << tiempo << std::endl;

    return 0;
}




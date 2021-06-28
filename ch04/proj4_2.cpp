// Escribir un programa que simule la pistola de radar de la policía. 
// El programa debería de leer la velocidad del automóvil e imprimir 
// el mensaje "exceso de velocidad" si supera los 55 km/h.

#include <iostream>

int main()
{
    float velocidad;
    const float max = 55.0;     // Velocidad máxima 

    std::cout << "Introducir velocidad: "; 
    std::cin >> velocidad;

    if (velocidad <= max)    
        std::cout << "Su velocidad actual es: " << velocidad << " km/h\n";

    else if (velocidad > max)
        std::cout << "Exceso de velocidad!" << std::endl;

    return 0;
}

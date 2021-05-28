/**
 * Escribir un programa que calcule el rango constante de desaceleración
 * y determine cuanto tiempo le llevará al ciclista volver a descansar
 * dada una velocidad inicial de 10 km/h.
 *
 * Para ello usar la fórmula a = (Vf - Vi) / t 
 **/

#include <iostream>

// Prototipos
void user_instruc();
void desaceleracion(float, float);

int main()
{
    float velocidad_ini, velocidad_fin;

    user_instruc();
    std::cout << "Introduzca la velocidad inicial y la velocidad final: " << std::endl;
    std::cin >> velocidad_ini >> velocidad_fin;

    desaceleracion(velocidad_ini, velocidad_fin);
    
    return 0;
}

void user_instruc()
{
    std::cout << "/**" << std::endl;
    std::cout << "* Escribir un programa que calcule el rango constante de" << std::endl;
    std::cout << "* desaceleración y determine cuanto tiempo le llevará al" << std::endl;
    std::cout << "* ciclista volver a descansar dada una velocidad de 10 km/h" << std::endl;
    std::cout << "*" << std::endl;
    std::cout << "**/" << std::endl;
    return;
}

void desaceleracion(float vel_i, float vel_f)
{
    float vel_ini_min, vel_fin_min;
    float desacel, tiempo;
    
    // Transformación  de km/h -> km/min
    vel_ini_min = (vel_i / 60);
    vel_fin_min = (vel_f / 60);

    // Desaceleración en km/min
    desacel = (vel_fin_min - vel_ini_min);
    std::cout << "La desaceleración es: " << desacel << " km/min" << std::endl;
    
    // Tiempo necesario para el descanso
    // t = (Vf - Vi) / a;   => Vf == 0 km/min
    tiempo = ((0 - vel_ini_min) / desacel);
    std::cout << "El tiempo necesario para el descanso es: " << tiempo \
              << " minutos" << std::endl;
    return;
}


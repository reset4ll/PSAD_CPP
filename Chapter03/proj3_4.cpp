/* Escribir un programa que calcule la velocidad de cuatro atletas en una
 * carrera de una milla de longitud expresada en pies/segundo y metros/segundo
 */

#include <iostream>

// Prototipos
void instruct_user();
void feet_per_second(float , float );


int main()
{
    
    float min, sec;

    instruct_user();
    std::cout << std::endl;
    std::cout << "--:--" << std::endl;
    std::cout << "Introduzca los tiempos en minutos y segundos del corredor: "<< std::endl;
    std::cin >> min >> sec;

    feet_per_second(min, sec);
    return 0;
}

// Definición de instruct_user()
void instruct_user()
{
    std::cout << "---//---                                                    " << std::endl;
    std::cout << "\"Este programa calcula la velocidad de varios corredores   " << std::endl;
    std::cout << "en una carrera de 1 milla de longitud en feet/sec y mt/sec\"" << std::endl;
    std::cout << "---//---                                                    " << std::endl;
    return;
}

// Definición de meter_per_second()
void feet_per_second(float minute, float second)
{
    float time, speed_feet_sec, speed_meter_sec;
    const float feet_per_mile = 5280.00; // Pies en una milla
    const float feet_per_meter = 3.281; //Pies en un metro

    time = ((minute * 60) + second); // Tiempo total en segundos
    speed_feet_sec = (feet_per_mile / time); // Velocidad en pies/sg
    speed_meter_sec = (speed_feet_sec / feet_per_meter); // Velocidad en mtr/sg

    std::cout << std::endl;
    std::cout << "#:La velocidad es (feet/sec): " << speed_feet_sec << std::endl; 
    std::cout << "#:La velocidad es (meter/sec) " << speed_meter_sec << std::endl;
    return;
}

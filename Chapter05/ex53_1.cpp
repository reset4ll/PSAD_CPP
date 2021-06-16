// Hay 9870 personas residiendo en una ciudad cuya población se incrementa
// un 10% cada año. Escribir un programa que determine En cuantos años le
// llevará a la población sobrepasarán los 30000 habitantes.


#include <iostream>

int main()
{
    float personas_iniciales = 9870;
    const float MAX = 30000;
    float personas_actuales;
    int incremento, year;

    std::cout << "Introduzca el año actual: ";
    std::cin >> year;
    std::cout << year << " >> " << personas_iniciales << '\n';

    personas_actuales = personas_iniciales;   // Inicializa
    while(MAX >= personas_actuales) {
        incremento = (personas_actuales * 10) / 100;   // Cálculo
        personas_actuales += incremento;
        year++;
        std::cout << year << " >> " << personas_actuales << '\n';
    }   // Fin while

    std::cout << "----+----\n";
    std::cout << "Se sobrepasarán los 30000 habitantes en el año: " \
              << year << '\n';
    return 0;
}

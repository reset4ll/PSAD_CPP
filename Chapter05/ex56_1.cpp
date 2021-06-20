// Escribir un programa que procese todos los valores en grados Celsius
// a Fahrenheit en los siguientes rangos:
//
// 1. Entre 10 y -10
// 2. Entre 100 y 1
// 3. Entre 15 y 50
// 4. Entre 50 y -75
// ---

#include <iostream>
#include <iomanip>

//Prototipo
void get_header();

int main()
{
    int number;
    int celsius;
    float fahrenheit;

    std::cout << "Los rangos disponible son los siguientes: " << '\n';
    std::cout << "1. Entre 10 y -10" << '\n';
    std::cout << "2. Entre 100 y 1" << '\n';
    std::cout << "3. Entre 15 y 50" << '\n';
    std::cout << "4. Entre 50 y -75" << '\n' << '\n';
    std::cout << "Elija una opción: ";
    std::cin >> number;

    switch (number) {

    case 1:
        get_header();
        for (celsius = -10; celsius <= 10; celsius++) {
            fahrenheit = 1.8 * celsius + 32;
            // Coloca los indicadores 'ios' para mostrar el punto decimal
            std::cout << std::setiosflags (std::ios::showpoint);
            std::cout << std::setw(7) << celsius << std::setw(15) \
                      << std::setprecision(4) << fahrenheit << '\n';
        }
        break;

    case 2:
        get_header();
        for (celsius = 100; celsius >= 1; celsius--) {
            fahrenheit = 1.8 * celsius + 32;
            // Coloca los indicadores 'ios' para mostrar el punto decimal
            std::cout << std::setiosflags(std::ios::showpoint);
            std::cout << std::setw(7) << celsius << std::setw(15) \
                      << std::setprecision(4) << fahrenheit << '\n';
        }
        break;

    case 3:
        get_header();
        for (celsius = 15; celsius <= 50; celsius++) {
            fahrenheit = 1.8 * celsius + 32;
            // Coloca los indicadores 'ios' para mostrar el punto decimal
            std::cout << std::setiosflags(std::ios::showpoint);
            std::cout << std::setw(7) << celsius << std::setw(15) \
                      << std::setprecision(4) << fahrenheit << '\n';
        }
        break;

    case 4:
        get_header();
        for (celsius = 50; celsius >= -75; celsius--) {
            fahrenheit = 1.8 * celsius + 32;
            // Coloca los indicadores 'ios' para mostrar el punto decimal
            std::cout << std::setiosflags(std::ios::showpoint);
            std::cout << std::setw(7) << celsius << std::setw(15) \
                      << std::setprecision(4) << fahrenheit << '\n';
        }
        break;

    default:
        std::cout << "Número inválido!" << '\n';
    }

    return 0;
}

// Imprime la cabecera
void get_header()
{
    // Coloca nombres cabecera
    std::cout << "---" << '\n';
    std::cout << std::setw(10) << "Celsius" \
              << std::setw(15) << "Fahrenheit" << '\n';
}




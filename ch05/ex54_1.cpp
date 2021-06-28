// Modificar el 'bucle' de la figura 5.3 del libro para que sea un bucle
// controlado por centinela. Usar un valor negativo de 'horas' como centinela.

#include <iostream>
#include <iomanip>

int main()
{
    int number_employees;
    float rate, pay;
    float total_pay = 0;
    float hours = 0;

    std::cout << "Enter number of employees: ";
    std::cin >> number_employees;

    std::cout << std::setiosflags (std::ios::fixed | std::ios::showpoint)
              << std::setprecision (2);

    std::cout << "Enter negative hours to finish..." << '\n';

    while (hours >= 0) {  // Centinela: cualquier valor negativo
        std::cout << "Hours: ";
        std::cin >> hours;
           // Salida si valor negativo
           if (hours > 0) {  // Seguir si tenemos horas
           std::cout << "Rate : $";
           std::cin >> rate;
           pay = hours * rate;
           std::cout << "Pay is $" << pay << '\n' << '\n';
           total_pay += pay;
           }
    }   // Fin while

    std::cout << "\nAll employee processed." << '\n';
    std::cout << "Total payroll is $" << total_pay << '\n';
}

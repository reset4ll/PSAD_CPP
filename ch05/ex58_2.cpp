// Escribir un programa que pudiese ser el bucle principal de control que
// controlase un menú para un balance de contabilidad:
// D = deposit; W = withdrawal; Q = quit;
// Asuma que las funciones 'process_withdrawal()' y 'process_deposit' ya
// existen y son llamadas con el argumento actual 'balance',
// Preguntar al usuario por uno de los códigos de transacción (D, W o Q) para
// que llame a la función apropiada.

#include <iostream>

// Prototipos
void process_deposit(float);
void process_withdrawal(float);

int main()
{
    char choice;
    float balance = 37.50;  // Cantidad de prueba

    do {  // Repetir menú al cliente hasta 'quit'

    // Menú de opciones
    std::cout << "Funciones disponibles:" << '\n';
    std::cout << "---" << '\n';
    std::cout << "*** (D)eposit" << '\n';
    std::cout << "*** (W)ithdrawal" << '\n';
    std::cout << "*** (Q)uit" << '\n';
    std::cin >> choice;

        switch (choice) {

            case 'D': case 'd':
                process_deposit(balance); // Ingreso
                break;

            case 'W': case 'w':
                process_withdrawal(balance);  // Reintegro
                break;
        }

    } while ((choice != 'Q') && (choice != 'q')); // Salida

    std::cout << "Saliendo..." << '\n';

    return 0;
}

// Definición de las funciones
void process_deposit(float balance)
{
    std::cout << "Procesando depósito..." << '\n';
    std::cout << "Balance: $" << balance << '\n';
    std::cout << '\n';
    return;
}

void process_withdrawal(float balance)
{
    std::cout << "Procesando retirada..." << '\n';
    std::cout << "Balance: $" << balance << '\n';
    std::cout << '\n';
    return;
}

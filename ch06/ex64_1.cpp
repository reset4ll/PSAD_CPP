
// Escribir una función que lea una cantidad de cambio por hacer y que llame a
// función make_change() con diferentes argumentos para determinar el número de
// billetes de 20, 10, 5, 1 y monedas de 25, 10, 5 y 1 cents.

#include <iostream>
#include "mkchange.h"

using namespace std;

int main()
{
    int bill;
    double change;
    double KD20 = 20.0;  // Dólares
    double KD10 = 10.0;
    double KD5 = 5.0;
    double KD1 = 1.0;
    double KC25 = 0.25; // Céntimos
    double KC10 = 0.10;
    double KC5 = 0.5;
    double KC1 = 0.1;

    cout << "\nIntroduzca la cantidad a cambiar: ";
    cin >> change;

    // Menú de selección
    cout << "Introduzca en que tipo de billete o moneda (otro nº para salir): \n";
    cout << "1. Billetes de $20\n";
    cout << "2. Billetes de $10\n";
    cout << "3. Billetes de $5\n";
    cout << "4. Billetes de $1\n";
    cout << "---\n";
    cout << "5. Quarters\n";
    cout << "6. Dimes\n";
    cout << "7. Nicles\n";
    cout << "8. Pennies\n";
    cout << "---\n";
    cout << "# ";
    cin >> bill;

        switch (bill) {

        case 1:
            int num_twenties;
            make_change(KD20, change, num_twenties);  // $20
            cout << "El número de billletes de $20 es: " << num_twenties << '\n';
            cout << "El cambio restante por dispensar es: " << change << '\n';
            break;

        case 2:
            int num_tens;
            make_change(KD10, change, num_tens);  // $10
            cout << "El número de billletes de $10 es: " << num_tens << '\n';
            cout << "El cambio restante por dispensar es: " << change << '\n';
            break;

        case 3:
            int num_fives;
            make_change(KD5, change, num_fives);  // $5
            cout << "El número de billetes de $10 es: " << num_fives << '\n';
            cout << "El cambio restante por dispensar es: " << change << '\n';
            break;

        case 4:
            int num_ones;
            make_change(KD1, change, num_ones);  // $1
            cout << "El número de billetes de $1 es: " << num_ones << '\n';
            cout << "El cambio restante por dispensar es: " << change << '\n';
            break;

        case 5:
            int num_quarters;
            make_change(KC25, change, num_quarters);  // $quarter
            cout << "El número de cuartos de dólar es: " << num_quarters << '\n';
            cout << "El cambio restante por dispensar es: " << change << '\n';
            break;

        case 6:
            int num_dimes;
            make_change(KC10, change, num_dimes);  // $dime
            cout << "El número de dimes es: " << num_dimes << '\n';
            cout << "El cambio restante por dispensar es: " << change << '\n';
            break;

        case 7:
            int num_nickles;
            make_change(KC5, change, num_nickles);  // $nickle
            cout << "El número de nickles es: " << num_nickles << '\n';
            cout << "El cambio restante por dispensar es: " << change << '\n';
            break;

        case 8:
            int num_pennies;
            make_change(KC1, change, num_pennies);  // $penny
            cout << "El número de pennies es: " << num_pennies << '\n';
            cout << "El cambio restante por dispensar es : " << change << '\n';
            break;

        default:
            cout << "\nSaliendo...\n";
            return 0;
        }

    return 0;
}

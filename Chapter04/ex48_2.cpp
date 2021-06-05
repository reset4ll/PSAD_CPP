// Reescribir la funcion compute_gros() en la que se permita al usuario
// introducir el ratio por horas extras en vez de tratarlo como un valor
// constante.

#include <iostream>

int main()
{
    // [Prototipos]
    // Muestra las instrucciones para el usuario
    void instruct_user(const float, const float);
    // Encuentra el salario bruto
    float compute_gross(float, float);
    // Encuentra el salario neto
    float compute_net(float, const float, const float);

    // Variables locales
    const float tax_bracket = 100.00; // Máximo salario sin deducción
    const float tax = 25.00; // Tasa de impuesto

    float hours, rate, net, gross;
    
    // PASO 1: Display las instucciones del usuario
    instruct_user(tax_bracket, tax);

    // PASO 2: Introduce horas y ratio.
    std::cout << "Horas trabajadas: ";
    std::cin >> hours;
    std::cout << "Precio por hora: ";
    std::cin >> rate;

    // PASO 3: Computa el salario bruto
    gross = compute_gross(hours, rate);

    // PASO 4: Computa el salario neto
    net = compute_net(gross, tax_bracket, tax);

    // PASO 5: Imprime salario bruto y neto
    std::cout << "El salario bruto es $" << gross << std::endl;
    std::cout << "El salario neto es $" << net << std::endl;
    return 0;
}

// Display las instrucciones del usuario
void instruct_user(const float tax_bracket, const float tax)
{
    std::cout << "Este programa computa el salario bruto y neto." << std::endl;
    std::cout << "se deduce un impuesto de $" << tax << " para" << std::endl;
    std::cout << "el empleado que gane mas de $" << tax_bracket << std::endl;
    std::cout << "---/---" << std::endl;
    std::cout << "Introduzca horas trabajadas y precio por hora" << std::endl;
    std::cout << "en lineas separadas." << std::endl;
    std::cout << "Presione <enter> despues de teclear cada numero." <<std::endl;
    return;
}

// Calcula la paga en bruto con tiempo extra incluido
float compute_gross(float hours, float rate)
{
    // DATOS LOCALES EXTRA
    const float max_hours = 40.0; // Máximo número de horas sin paga extra    
    float overtime_rate;  // Ratio de incremento por horas extra
    float gross; // Sueldo bruto

    // Introduce el ratio por horas extra
    std::cout << "Introduzca el ratio de incremento por horas extra: " << std::endl;
    std::cin >> overtime_rate;

    if (hours <= max_hours)
        return hours * rate;
    else
    {
        gross = max_hours * rate;  // Calcula tiempo extra
        return gross + (hours - max_hours) * overtime_rate * rate;
    }
}

// Encuentra el salario neto
float compute_net(float gross, float tax_bracket, const float tax)
{
   if (gross > tax_bracket)
       return gross - tax;
   else
       return gross;
}

























// Modificar el programa ex46_1.cpp añadiendo algunas comprobaciones
// de error a las funciones 'get_hours()' y 'get_rate()' con 
// declaraciones 'if'


#include <iostream>

// Prototipos
void instruct_user(const float, const float);
float get_hours();
float get_rate();
float compute_gross(float, float);
float compute_net(float, const float, const float);
void display(float, float);


int main()
{
    // Variables locales
    const float tax_bracket = 100.00; // Tope sin deducción
    const float tax = 25.00; // Tasa de impuesto

    float hours, rate, gross, net;
    
    // PASO 1: Display las instucciones del usuario
    instruct_user(tax_bracket, tax);
    
    // PASO 2: Introduce horas y precio/hora
    hours = get_hours();
    rate = get_rate();

    // PASO 3: Computa el salario bruto
    gross = compute_gross(hours, rate);

    // PASO 4: Computa el salario neto
    net = compute_net(gross, tax_bracket, tax);

    // PASO 5: Imprime en pantalla el salario bruto y neto
    std::cout << std::endl;
    display(gross, net);
    return 0;
}

// Display las instrucciones del usuario
void instruct_user(const float tax_bracket, const float tax)
{
    std::cout << "Este programa computa el salario bruto y neto " << std::endl;
    std::cout << "diario. Se deduce un impuesto de $" << tax << " para" << std::endl;
    std::cout << "el empleado que gane mas de $" << tax_bracket << std::endl;
    std::cout << "---/---" << std::endl;
    std::cout << "Introduzca horas trabajadas y precio por hora" << std::endl;
    std::cout << "en lineas separadas." << std::endl;
    std::cout << "Presione <enter> despues de teclear cada numero." <<std::endl;
    return;
}

// Obtiene el número de horas trabajadas
float get_hours()
{
    float hours;
    
    std::cout << "Horas diarias trabajadas: ";
    std::cin >> hours;
    
    if (hours > 0 && hours <= 24) // Rango diario 0-24h
    {
       return hours;
    }
    else
    {
       std::cout << "Fuera de rango !!!" << std::endl;
       std::cout << "Introduce el rango (0-24h)" << std::endl;
    }  
}

// Obtiene el salario por hora trabajada
float get_rate()
{
    float rate, hours;

    std::cout << "Precio por hora: ";
    std::cin >> rate;
    
    if (hours > 0 && hours <= 24) // Rango diario 0-24h
    {
       return rate;
    }
    else
    {
        std::cout << "Fuera de rango !!!" << std::endl;
        std::cout << "Introduce el rango (0-24h)" << std::endl;
    }
}

// Encuentra el salario bruto
float compute_gross(float hours, float rate)
{
    return hours * rate;
}

// Encuentra el salario neto
float compute_net(float gross, float tax_bracket, const float tax)
{
   if (gross > tax_bracket)
       return gross - tax;
   else
       return gross;
}

// Muestra en pantalla los resultados
void display(float gross, float net)
{
    std::cout << "El salario bruto es $" << gross << std::endl;
    std::cout << "El salario neto es $" << net << std::endl;
    return;
}




// Escribir un programa corto que calcule e imprima las sucesivas potencias
// de (1/2)^k => k = 0,1,2,3,...n tal que sea menor de 0,00001. Usar un bucle
// 'while' o 'do-while'.

#include <iostream>
#include <cmath>
#include <iomanip>

int main()
{
    double result = 0.0;
    int index = 0;

        while (index < 14)
        {
            result = pow(0.5,index);  // (1/2)^index
            std::cout << "Index: " << index << std::setw(3) \
                      << " -> " << result << std::setw(5) << '\n';
            index++;
        }

    return 0;
}




// Escribir una declaración 'if' que pueda ser usada para computar la
// media de 'n' números cuya suma es 'total' cuando 'n' sea más grande
// que 0 e imprima un mensaje de error cuando no lo sea. 
// La media debería ser computada al dividir 'total' por 'n'.

#include <iostream>

int main()
{
    ...

    if (n > 0)
    {
        average = total / n;
        return average;
    }
    else
    {
        std::cout << "Error!" << std::endl;
    }
}

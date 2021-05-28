// Corregir los errores de sintaxis del programa indicado y mostrar los
// valores impresos del mismo. Pag:56
//

#include <iostream>

int main()
{
    float x, y, z;

    y = 15.0;
    z = y + 3.5;
    x = z + y;
   
    std::cout << "y = " << y << std::endl
              << "z = " << z << std::endl
              << "x = " << x << std::endl
                             << std::endl;
    return 0;
}

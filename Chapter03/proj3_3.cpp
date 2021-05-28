/* Escribir una función que imprima seis triángulos uno encima del otro.
 */

#include <iostream>

void draw_triangle(); // Prototipo

int main()
{
    std::cout << std::endl;
    draw_triangle();
    draw_triangle();
    draw_triangle();
    draw_triangle();
    draw_triangle();
    draw_triangle();
    std::cout << std::endl;
}

void draw_triangle()
{
    std::cout << "\t  |  " << std::endl;
    std::cout << "\t / \\ " << std::endl;
    std::cout << "\t/___\\" << std::endl;
    return;
}

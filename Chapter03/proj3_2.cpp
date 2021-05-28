/* Escribir las funciones que impriman las iniciales de mi nombre en
 * forma de bloque.
 */

#include <iostream>

//Prototipos
void draw_block1();
void draw_block2();
void draw_block3();

int main()
{
    std::cout << std::endl;
    draw_block1();
    draw_block2();
    draw_block3();
    std::cout << std::endl;
    
    return 0;
}

void draw_block1()
{
    std::cout << "\t ** \t***\t*** " << std::endl;
    std::cout << "\t*  *\t*  \t*   " << std::endl;
    return;
}

void draw_block2()
{
    std::cout << "\t****\t***\t*   " << std::endl;
    return;
}

void draw_block3()
{
    std::cout << "\t*  *\t*\t*     " << std::endl;
    std::cout << "\t*  *\t***\t*** " << std::endl;
    return;
}

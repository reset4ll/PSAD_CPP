/* Crear un nuevo dibujo creando una nueva función siguiendo el patrón
 * de la sección 3.2
 */

#include <iostream>
    
// Prototipos
void draw_triangle();
void draw_trapez(); 
void draw_mar(); 
void draw_intersec();
void draw_base_ext();
void draw_rev_intersec();

int main()
{
    std::cout << std::endl;
    draw_triangle();
    draw_trapez();
    draw_mar();
    std::cout << std::endl;
    return 0;
}


// Definición de la función triángulo
void draw_triangle()
{
        draw_intersec();
        draw_base_ext();
}
void draw_intersec()
{
    std::cout << "\t       |>     " << std::endl;
	std::cout << "\t      / \\    " << std::endl;
	std::cout << "\t     /   \\   " << std::endl;
	std::cout << "\t    /     \\  " << std::endl;
	return; 
}

void draw_base_ext()
{
	std::cout << "\t\\==============/ " << std::endl;
	return; // Fin triángulo
}
    

// Definición de la función trapez
void draw_trapez()
{
        draw_rev_intersec();
        return;
}
void draw_rev_intersec()
{
	std::cout << "\t \\ oooooooooo / " << std::endl;
	std::cout << "\t  \\__________/  " << std::endl;
	return; // Fin trapez
}
    

// Definición de la función mar
void draw_mar()
{
        std::cout << " ~~ ~~ ~~ ~~ ~~ ~~ ~~ ~~ ~~ ~~ " << std::endl;
        std::cout << "  ~~ ~~ ~~ ~~ ~~ ~~ ~~ ~~ ~~ " << std::endl;
        return; // Fin mar
}



// Escribir la estructura del programa con 'main' y la función 'compute_ave' ya
// modificada para unos valores de llamada de 'sum' igual a 100.0 y 'num_items'
// igual a 10;


#include <iostream>
#include <iomanip>
#include "ReadFunc.cpp"
#include "SumFunc.cpp"
#include "AveNFunc.cpp"
#include "PrntFunc.cpp"

using namespace std;

//Prototipos
int read_num_items(int&);
float compute_sum(int);
float compute_ave(int, float, float&);
void print_sum_ave(int, float, float);

int main()
{
    int status_flag;
    int num_items = 10;  // Valores por defecto
    float sum = 100.0;
    float average = 0.0;

    status_flag = read_num_items(num_items);
    if (status_flag) {
        sum = compute_sum(num_items);
        average = compute_ave(num_items, sum, ave);  // Modificación
        print_sum_ave(num_items, sum, average);
    } else {
        cout << "Failure in read_num_items." << '\n';
        cout << "Program execution terminated." << '\n';
    }

    return 0;

}


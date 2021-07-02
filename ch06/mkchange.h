#ifndef MKCHANGE_H
#define MKCHANGE_H

#include <cmath>

// Esta función determina el número de unidades de cambio de una unidad monetaria
// en concreto para dispensar en caso de necesidad de cambio.
void make_change(double change_denom, double& change_needed, int& num_units)
{
    num_units = (int)(change_needed / change_denom);
    change_needed = change_needed - (num_units * change_denom);
    return;
}

// Es función redondea la función de tipo 'double' en N lugares para (N >= 0);
double round(double x, int n)
{
    double half;
    double ten_to_n;

    // Calcula los N lugares más cercanos de cd 'x'
    if (x < 0)
        half = -0.5;
    else
        half = 0.5;
    ten_to_n = pow(10.0, n);

    return double ((int)(x * ten_to_n + half)) / ten_to_n;
}

#endif

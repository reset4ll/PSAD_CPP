// Función compute_tax();
// Calcula los impuestos a deber con arreglo a unos ingresos brutos.

#ifndef CMPTAXAM_H
#define CMPTAXAM_H

float compute_tax(float adj_income)
{
    const float cat1_max = 34000.0;
    const float cat2_max = 82150.0;
    const float cat1_rate = 0.15;
    const float cat2_rate = 0.28;
    const float cat3_rate = 0.31;
    const float min_valid_amount = 0.0;
    const float invalid_input = -1.0;

    float tax_amount; // Cantidad de impuesto para ser devuelto

        //Calcula y devuelve el impuesto
        if (adj_income < min_valid_amount)
            return invalid_input;
        else if (adj_income > cat2_max)
            tax_amount = cat1_rate * cat1_max +
                         cat2_rate * (cat2_max -cat1_max) +
                         cat3_rate * (adj_income - cat2_max);
        else if (adj_income > cat1_max)
            tax_amount = cat1_rate * cat1_max +
                         cat2_rate * (adj_income - cat1_max);
        else
            tax_amount = cat1_rate * adj_income;
    return tax_amount;

}
#endif

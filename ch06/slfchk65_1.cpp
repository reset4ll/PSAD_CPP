// La función 'compute_ave()' devuelve un valor simple usando una declaración
// 'return'. Reescribir la función pero delvolviendo el valor a través de un
// argumento de salida.

float compute_ave(int num_items, float sum, float& average)
{
    float average = 0.0;

    // Calcula la media de los datos
    if (num_items < 1)
    {
        cout << "Invalid value for num_items = " num_items << '\n';
        cout << "Average not computed." << '\n';
        return 0.0
    }
    // Calcula 'average' y la envía como retorno al argumento formal
    // de la función por referencia
    average = sum / float(num_items);
}

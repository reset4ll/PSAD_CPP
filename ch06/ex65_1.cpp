// Escribir la función 'read_num_items' usando el algoritmo dado en la sección 6.5

void read_num_items(int& items)
{
    cout << "Enter number of items to compute: ";
    cin << items;

    if (items > 0) {
        return 1;
    } else {
        cout << "Read failure, number of items not valid" << '\n';
        cout << "Program execution terminated" << '\n';
        return 0;
    }
}

// Diseñar e implementar un algoritmo para la función 'read_num_items()' que use
// un 'loop' para asegurarse de que el usuario introduce un valor positivo de
// 'items'. Dicho 'loop' debería ejecutarse repetitivamente, cada vez pidiendo
// al usuario un numero positivo de elementos.

void read_num_items(int& items)
{
    do {  // Bucle 'do-while' anulando 'status_flag'

        cout << "Enter a positive number of items: ";

    } while ((cin >> items) <= 0);  // Repetir
}

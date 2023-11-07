//
// Created by adria on 07/11/2023.
//

#include "../../include/algorithms/insertion.h"
#include "../../include/utils.h"

void srtviz::algorithms::insertion_sort(int *numbers, int len, sf::RenderWindow &window)
{
    for (int i = 1; i < len; i++)
    {
        int temp_pos = i, temp = numbers[i];
        while (temp_pos && numbers[temp_pos - 1] > temp) // Mientras que la posicion no sea 0 y el valor de la posicion anterior sea mayor que el de la actual
        {
            numbers[temp_pos] = numbers[temp_pos - 1]; // Asignar el cambio de posicion
            temp_pos--;
        }
        numbers[temp_pos] = temp; // Asignar el cambio de posicion

        srtviz::utils::draw_array(numbers, len, window);
    }
}

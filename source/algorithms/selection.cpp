//
// Created by adria on 07/11/2023.
//

#include "../../include/algorithms/selection.h"
#include "../../include/utils.h"

void srtviz::algorithms::selection_sort(int *numbers, int len, sf::RenderWindow &window)
{
    for (int i = 0; i < len; i++)
    {
        int temp = numbers[i], pos = i;

        for (int j = i; j < len; j++)
            if (numbers[j] < temp)
            {
                temp = numbers[j];
                pos = j;
            }

        numbers[pos] = numbers[i];
        numbers[i] = temp;

        srtviz::utils::draw_array(numbers, len, window);
    }
}

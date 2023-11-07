//
// Created by adria on 07/11/2023.
//

#include "../../include/algorithms/bubble.h"
#include "../../include/utils.h"

void srtviz::algorithms::bubble_sort(int *numbers, int len, sf::RenderWindow &window)
{
    // Bubble sort algorithm
    for (int i = 0; i < len; i++)
        for (int j = 0; j < len - i - 1; j++)
        {
            if (numbers[j] > numbers[j + 1])
            {
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }

            srtviz::utils::draw_array(numbers, len, window);
        }


}


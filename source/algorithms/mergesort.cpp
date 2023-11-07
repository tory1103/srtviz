//
// Created by adria on 07/11/2023.
//

#include "../../include/algorithms/mergesort.h"
#include "../../include/utils.h"

void srtviz::algorithms::mergesort_merge(const int *a, int len_a, const int *b, int len_b, int *c)
{
    int i = 0, j = 0, k = 0;
    while ((i < len_a) && (j < len_b))
    {
        if (a[i] <= b[j]) c[k] = a[i++];
        else c[k] = b[j++];
        k++;
    }

    while (i < len_a) c[k++] = a[i++];

    while (j < len_b)c[k++] = b[j++];
}

void srtviz::algorithms::mergesort_sort(int *numbers, int len, sf::RenderWindow &window)
{
    if (len <= 1) return;
    int temp[len];

    srtviz::algorithms::mergesort_sort(&numbers[0], len / 2, window);
    srtviz::algorithms::mergesort_sort(&numbers[len / 2], len - (len / 2), window);

    srtviz::algorithms::mergesort_merge(&numbers[0], len / 2, &numbers[len / 2], len - (len / 2), temp);

    for (int k = 0; k < len; k++) numbers[k] = temp[k];

    // TODO: Make draw function draw all items and then sort it
    //  What it does now is draw the array every time it sorts an item
    //  So it just show the final result, not the process
    srtviz::utils::draw_array(numbers, len, window);
}


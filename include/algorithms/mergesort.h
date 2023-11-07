//
// Created by adria on 07/11/2023.
//

#ifndef SRTVISUALIZER_MERGESORT_H
#define SRTVISUALIZER_MERGESORT_H

#include <SFML/Graphics/RenderWindow.hpp>

namespace srtviz::algorithms
{
    void mergesort_merge(const int a[], int len_a, const int b[], int len_b, int c[]);

    void mergesort_sort(int *numbers, int len, sf::RenderWindow &window);
}

#endif //SRTVISUALIZER_MERGESORT_H

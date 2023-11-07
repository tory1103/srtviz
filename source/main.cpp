//
// Created by adria on 07/11/2023.
//

#include <iostream>
#include <SFML/Graphics.hpp>

#include "../include/algorithms.h"
#include "../include/utils.h"

int main()
{
    // Algorithms map
    std::map<int, srtviz::utils::t_algorithm> algorithms;
    algorithms[1] = {srtviz::algorithms::bubble_sort, "Bubble Sort"};
    algorithms[2] = {srtviz::algorithms::selection_sort, "Selection Sort"};
    algorithms[3] = {srtviz::algorithms::insertion_sort, "Insertion Sort"};
    algorithms[4] = {srtviz::algorithms::mergesort_sort, "Merge Sort"};

    // Create array of 100 random numbers
    int numbers_len = 600;
    int numbers[numbers_len];
    for (int i = 0; i < numbers_len; i++) numbers[i] = rand() % numbers_len;

    // Let user choose algorithm from descriptions map
    std::cout << "Choose an algorithm (by number):" << std::endl;
    for (auto &algorithm: algorithms) std::cout << algorithm.first << ". " << algorithm.second.description << std::endl;
    int choice = 0;
    std::cin >> choice;

    // Create window, draw array and wait 1 second
    sf::RenderWindow window(sf::VideoMode(800, 800), "Algorithm Visualizer | " + algorithms[choice].description);
    srtviz::utils::draw_array(numbers, numbers_len, window);
    sf::sleep(sf::milliseconds(1000));

    // Run algorithm
    algorithms[choice].algorithm(numbers, numbers_len, window);

    // Main loop (wait for window to close)
    while (window.isOpen())
    {
        sf::Event e{};
        while (window.pollEvent(e)) if (e.type == sf::Event::Closed) window.close();
    }

    return 0;
}

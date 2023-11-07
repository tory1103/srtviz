//
// Created by adria on 07/11/2023.
//

#ifndef SRTVIZ_UTILS_H
#define SRTVIZ_UTILS_H

#include <functional>
#include <SFML/Graphics.hpp>

namespace srtviz::utils
{
    typedef struct
    {
        std::function<void(int *, int, sf::RenderWindow &)> algorithm;
        std::string description;
    } t_algorithm;

    inline void draw_array(const int *array, int len, sf::RenderWindow &window)
    {
        // Update window values
        window.clear();

        // Draw rectangles representing the array
        // (height = number value * 5 for better visualization)
        auto width = static_cast<float>(window.getSize().x) / len;
        for (int i = 0; i < len; i++)
        {
            sf::RectangleShape rectangle(sf::Vector2f(width, array[i]));
            rectangle.setPosition(i * width, window.getSize().y - rectangle.getSize().y);
            rectangle.setFillColor(sf::Color::Cyan);
            window.draw(rectangle);
        }

        // Display changes on screen
        window.display();
    }
}

#endif //SRTVIZ_UTILS_H

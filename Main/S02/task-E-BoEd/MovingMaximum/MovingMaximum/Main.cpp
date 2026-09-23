#include <iostream>
#include "MovingMaximum.h"
#include <string>
int main()
{
    std::size_t window_size;

    std::cerr << "Window size: ";
    std::cin >> window_size;

    if (window_size == 0)
    {
        std::cerr << "Window size must be greater than zero.\n";
        return 1;
    }

    MovingMaximum filter{ window_size };

    double value;

    while (std::cin >> value)
    {
        double result{ filter.addSample(value) };
        std::cout << "The maximum number is : " << result << '\n';
    }

    return 0;
}
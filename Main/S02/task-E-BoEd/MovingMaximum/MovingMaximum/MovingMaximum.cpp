#include "MovingMaximum.h"
#include <algorithm>
#include <iostream>

//Constructor, initializes the size of the silding window
MovingMaximum::MovingMaximum(std::size_t window_size)
    : window_size_{ window_size }
{
    std::cerr << "MovingMaximum created\n";
}

//Destructor, used to show the object lifetime ends
MovingMaximum::~MovingMaximum()
{
    std::cerr << "MovingMaximum destroyed\n";
}

double MovingMaximum::addSample(double value)
{
    //add new value to the end of the window
    values_.push_back(value);

    if (values_.size() > window_size_)
    {
        //remove the oldest value from the front of the window
        values_.pop_front();
    }

    //find the maximum value at the window and return
    return *std::max_element(values_.begin(), values_.end());
}

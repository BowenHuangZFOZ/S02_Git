#ifndef MOVING_MAXIMUM_H //Prevent the same header file from being included multiple times
#define MOVING_MAXIMUM_H

#include <cstddef>
#include <deque>

//MobingMaximum keeps the last N input values and 
//returns the maximum value inside the current window

class MovingMaximum
{
private:
	//Maximum number of values stored in the sliding window
	std::size_t window_size_;
	//Stores the most recent input values
	std::deque<double> values_;

public:
	//Create a moving maximum filter with a given window size
	MovingMaximum(std::size_t window_size);
	//Called automatically when the ovject is destroyed
	~MovingMaximum();
	//Add a new sample and returns the maximum value of the current sliding window
	double addSample(double value);
};

#endif
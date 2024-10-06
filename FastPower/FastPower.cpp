// FastPower.cpp 

#include <iostream>
#include "FastPower.h"


int main()
{
	std::cout << FastMath::FastMathAlgo::pow(1,4000000000) << std::endl;
	
	// This will be stack overflow issue
	//std::cout << FastMath::FastMathAlgo::liner_pow(1, 1000000000) << std::endl;

	std::cout << FastMath::FastMathAlgo::liner_pow_iterative(1, 4000000000) << std::endl;

	
}


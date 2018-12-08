#include "Multiplier.h"

Multiplier::Multiplier()
{
}

void Multiplier::introduction()
{
	// Introduction text
	std::cout << "****************************** WELCOME! ******************************" << std::endl << std::endl;
	std::cout << "This program takes two numbers and multiplies them together. Enjoy!" << std::endl;

	// Takes input
	long double firstInp{ 0 }, secondInp{ 0 };
	std::cout << "First number: ";
	std::cin >> firstInp;
	std::cout << "Second number: ";
	std::cin >> secondInp;

	// Multiplies those two inputs
	long double product = firstInp * secondInp;

	// Prints result
	std::cout << product << std::endl;
}



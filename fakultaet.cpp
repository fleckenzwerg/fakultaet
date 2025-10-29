#include <iostream> // std::cout, std::endl, std::cin
#include <stdlib.h> // EXIT_SUCCESS
#include <limits.h> // INT_MAX

/**
 * Calculates the factorial of a given number.
 * @param f The number to calculate the factorial of.
 * @return The factorial of the given number.
 */
int fak(int f)
{
	if (f < 0)
	{
		std::cerr << "Error: Factorial of negative number is undefined." << std::endl;
		return -1;
	}
	if (f > 12)
	{
		std::cerr << "Error: Factorial of " << f << " is too large to be represented by an int." << std::endl;
		return -1;
	}
	if (f <= 0)
		return 1;
	return (fak(f - 1) * f);
}

int main(void)
{
	// Calculate and print the factorial of numbers from 0 to 12
	for (int s = 0; s < 13; s++)
	{
		int result = fak(s);
		if (result != -1)
			std::cout << s << "! = " << result << std::endl;
	}

	std::cin.get();
	return EXIT_SUCCESS;
}
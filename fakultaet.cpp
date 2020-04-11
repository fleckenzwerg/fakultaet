#include <iostream> // std::cout, std::endl, std::cin
#include <stdlib.h> // EXIT_SUCCESS
 
int fak(int f);
 
int main(void)
{
	// Zeichen für Fakultät !
	// n ! = ((n-1) ! * n)
 
	for (int s = 0; s < 13; s++)
	{
		std::cout << s << "! = " << fak(s) << std::endl;
	}
 
	std::cin.get();
	return EXIT_SUCCESS;
}
 
int fak(int f)
{
	if (f <= 0)
		return (1);
	return (fak(f - 1) * f);
}
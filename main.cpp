#include "fibonacci.h"
#include <iostream>

int main()
{
	for(int i = 0; i < 10;  ++i)
	{
		std::cout << frec(i) << " ";
	}
	std::cout << std:: endl;
	//std::cout << frec(44) << "\n";

	std::cout << Fib<0>::val << " "
	 << Fib<1>::val << " "
	 << Fib<2>::val << " "
	 << Fib<3>::val << " "
	 << Fib<4>::val << " "
	 << Fib<45>::val<< " ";

	std::cout << std:: endl;

	constexpr int i = 45;
	std::cout << fib(0) << " "
	 << fib(1) << " "
	 << fib(2) << " "
	 << fib(3) << " "
	 << fib(4) << " "
	 << fib(i) << " \n";

	constexpr double sqrt5 = sqrt(5);
	constexpr double golder_ratio = (1 - sqrt(5)) / 2;
	std::cout << "sqrt5: " << sqrt5 << "\n";
	std::cout << "golder_ratio: " << golder_ratio << "\n";
	for(int i = 1; i < 10;  ++i)
	{
		std::cout << binet(i) << " ";
	}
	std::cout << "\n";
	std::cout << static_cast<int>(binet(46)) << "\n";
	return 0;
}

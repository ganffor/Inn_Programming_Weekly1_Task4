//Task 4

#include <iostream>

char drink;

int main()
{
	std::cout << "Whats's your favorite drink?" << std::endl << "1. Coffee" << std::endl <<
		"2. Tea" << std::endl << "3. Coca Cola" << std::endl;
	std::cin >> drink;
	switch (drink)
	{
	case '1':
		std::cout << "Coffee is delicious";
		break;
	case '2':
		std::cout << "Tea gives peace of mind";
		break;
	case '3':
		std::cout << "Coke will give you a white smile";
	}
}
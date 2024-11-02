#include <iostream>
#include "point.hpp"
 
int main() {
	Point p1{ 3,4 };
	Point p2{ 1,2 };
	Point p3{ 3,4 };

	if (p1 == p2) {
		std::cout << "p1 is equal to p2" << std::endl;

	}
	else {
		std::cout << "p1 is not equal to p2" << std::endl;
	}
	if (p1 == p3) {
		std::cout << " p1 is equal to p3" << std::endl;

	}
	else {
		std::cout << " p1 is not equal to p3" << std::endl;

	}

	std::cout << "p1: " << p1 << std::endl;
	std::cout << "p2: " << p2 << std::endl;
	std::cout << "p3: " << p3 << std::endl;

	return 0;
}
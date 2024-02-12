#include "Point.hpp"

// use https://planetcalc.com/8108/ to double check

int main( void ) {

	Point a(0, 0);
	Point b(10, 20);
	Point c(20, 0);
	Point point(-0.1, 1);

	if (bsp(a, b, c, point) == true)
		std::cout << "point is inside the triangle" << std::endl;
	else
		std::cout << "point is outside the triangle"<< std::endl;
	return 0;
}
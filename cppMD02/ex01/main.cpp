#include "Fixed.hpp"

/*we use the fixed point to store the value given to the constuctor
then cause use toINT or toFloat to display it in either type
 fixed points are more efficient than floating point numbers.
 its compatibility with hardware that expects int values that
 need to represent fractional numbers.

 downsides include overflow, underflow issues, and requires careful
 management of scaling factors. Floatting point can still beat it in
 terms of its precision and its dynamic range.
*/
int main( void ) {

	Fixed a;
	Fixed const b( 10 );
	Fixed const c( 42.42f );
	Fixed const d( b );

	a = Fixed( 1234.4321f );

	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;

	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;
	
	return 0;
}
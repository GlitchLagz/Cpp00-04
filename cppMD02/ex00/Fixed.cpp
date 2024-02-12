#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	_fixed = 0;
	return ;
}

Fixed::Fixed(const Fixed& src)
{
    std::cout << "Copy constructor called" << std::endl;
	_fixed = src.getRawBits();
}
 
Fixed& Fixed::operator=(const Fixed& src)
{
    std::cout << "Copy assignment operator called" << std::endl;
	if (this == &src)
	{
		return *this;
	}
	setRawBits(src.getRawBits());
	return *this;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return _fixed;
}

void Fixed::setRawBits(int const raw)
{
	_fixed = raw;
}
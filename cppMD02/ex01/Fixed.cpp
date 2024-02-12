#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	_fixed = 0;
	return ;
}

Fixed::Fixed(const int src) : _fixed(src << _frac_bits)
{
	std::cout << "Int constructor called" << std::endl;
	//std::cout << "fixed :" << this->_fixed << std::endl;
}

Fixed::Fixed(const float src) : _fixed(std::roundf(src * (1 << _frac_bits)))
{
	std::cout << "Float constructor called" << std::endl;
	//std::cout << "fixed :" << this->_fixed << std::endl; 
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
	//std::cout << "getRawBits member function called" << std::endl;
	return _fixed;
}

void Fixed::setRawBits(int const raw)
{
	_fixed = raw;
}

int Fixed::toInt(void) const
{
	return this->_fixed >> _frac_bits;
}

//static cast fixed point interger to float
float Fixed::toFloat(void) const
{
	return static_cast<float>(this->getRawBits()) / (1 << _frac_bits);
}

//overloads << operator to insert floating point representation of a fixed point to
//the output file

std::ostream & operator<<(std::ostream & o, Fixed const & i)
{
	o << i.toFloat();
	return o;
}
#include "Fixed.hpp"

Fixed::Fixed()
{
	//std::cout << "Default constructor called" << std::endl;
	_fixed = 0;
	return ;
}

Fixed::Fixed(const int src) : _fixed(src << _frac_bits)
{
	//std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float src) : _fixed(std::roundf(src * (1 << _frac_bits)))
{
	//std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& src)
{
    //std::cout << "Copy constructor called" << std::endl;
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
	//std::cout << "Destructor called" << std::endl;
	return ;
}

int Fixed::getRawBits(void) const
{
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

float Fixed::toFloat(void) const
{
	return static_cast<float>(this->getRawBits()) / (1 << _frac_bits);
}

std::ostream & operator<<(std::ostream & o, Fixed const & i)
{
	o << i.toFloat();
	return o;
}

// comparison ops

bool Fixed::operator>(const Fixed &src) const
{
	return this->getRawBits() > src.getRawBits();
}

bool Fixed::operator<(const Fixed &src) const
{
	return this->getRawBits() < src.getRawBits();
}

bool Fixed::operator>=(const Fixed &src) const
{
	return this->getRawBits() >= src.getRawBits();
}

bool Fixed::operator<=(const Fixed &src) const
{
	return this->getRawBits() <= src.getRawBits();
}

bool Fixed::operator==(const Fixed &src) const
{
	return this->getRawBits() == src.getRawBits();
}

bool Fixed::operator!=(const Fixed &src) const
{
	return this->getRawBits() != src.getRawBits();
}

// +, -, *, \ ops

Fixed Fixed::operator+(const Fixed &src) const
{
	return Fixed(this->toFloat() + src.toFloat());
}

Fixed Fixed::operator-(const Fixed &src) const
{
	return Fixed(this->toFloat() - src.toFloat());
}

Fixed Fixed::operator*(const Fixed &src) const
{
	return Fixed(this->toFloat() * src.toFloat());
}

Fixed Fixed::operator/(const Fixed &src) const
{
	return Fixed(this->toFloat() / src.toFloat());
}

// increment and decrement ops

Fixed& Fixed::operator++(void)
{
	++this->_fixed;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed tmp(*this);
	tmp._fixed = this->_fixed++;
	return tmp;
}

Fixed& Fixed::operator--(void)
{
	--this->_fixed;
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed tmp(*this);
	tmp._fixed = this->_fixed--;
	return tmp;
}

// Max, min functs

Fixed& Fixed::min(Fixed &a, Fixed  &b)
{
	if (a.getRawBits() < b.getRawBits())
		return a;
	return b;
}

const Fixed& Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a.getRawBits() < b.getRawBits())
		return a;
	return b;
}

Fixed& Fixed::max(Fixed &a, Fixed &b)
{
	if (a.getRawBits() > b.getRawBits())
		return a;
	return b;
}

const Fixed& Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a.getRawBits() > b.getRawBits())
		return a;
	return b;
}

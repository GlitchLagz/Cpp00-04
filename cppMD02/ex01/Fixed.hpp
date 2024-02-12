#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <cmath>

class Fixed
{
	private:
		int _fixed;
		static const int _frac_bits = 8;

	public: 
		Fixed();
		Fixed(const Fixed &src);
		Fixed(const int src);
		Fixed(const float src);
		Fixed& operator=(const Fixed &src);
		~Fixed();
		
		void setRawBits(int const raw);
		int getRawBits(void) const;
		
		float toFloat(void) const;
		int toInt(void) const;
	
};

std::ostream & operator<<(std::ostream & o, Fixed const & i);

#endif
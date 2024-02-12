#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>

class Fixed
{
	private:
		int _fixed;
		static const int _frac_bits = 8;

	public: 
		Fixed();
		Fixed(const Fixed& src);
		Fixed& operator=(const Fixed& src);
		~Fixed();
		void setRawBits(int const raw);
		int getRawBits(void) const; 
	
};

#endif
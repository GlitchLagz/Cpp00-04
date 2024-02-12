#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <cmath>

class Fixed
{
	private:
		int _fixed;
		static const int _frac_bits = 8;
	//  static members are shared by all objects of the class
	//  8 needs to be a static constant because the number of bits remains the same on all objects.
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

		bool operator>(const Fixed &src) const;
		bool operator<(const Fixed &src) const;
		bool operator>=(const Fixed &src) const;
		bool operator<=(const Fixed &src) const;
		bool operator==(const Fixed &src) const;
		bool operator!=(const Fixed &src) const;

		Fixed operator+(const Fixed &src) const;
		Fixed operator-(const Fixed &src) const;
		Fixed operator*(const Fixed &src) const;
		Fixed operator/(const Fixed &src) const;

		Fixed& operator++(void); //prefix for ++a etc;
		Fixed operator++(int); //postfix a++ etc;
		Fixed& operator--(void);
		Fixed operator--(int);

		static Fixed& min(Fixed &a, Fixed &b);
		static const Fixed& min(const Fixed &a, const Fixed &b);
		static Fixed& max(Fixed &a, Fixed &b);
		static const Fixed& max(const Fixed &a, const Fixed &b);
		/*
			declaring the memeber functions as static allows them to be called
			even if no objects of the class exist, the functions are used by onl the class
			name and the scope resolution operator'::'.
			they can only access static data members, other static member functions
			and functions outside the class.
		*/
};

std::ostream & operator<<(std::ostream & o, Fixed const & i);

#endif
#pragma once

#include <iostream>
#include <string>
#include <cmath>

class Fixed
{
	public:

	Fixed();
	Fixed(const int n);
	Fixed(const float f);
	Fixed(const Fixed &h);
	~Fixed();

	Fixed& operator = (const Fixed &h);


	int   getRawBits(void) const;
	void  setRawBits(const int raw);
	int   toInt(void) const;
	float toFloat(void) const;

	private:
		int			m_value;
		static int 	s_bits;

};

std::ostream &operator<<(std::ostream &out, Fixed const &f);


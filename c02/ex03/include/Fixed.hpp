/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 13:04:40 by lrosa-do          #+#    #+#             */
/*   Updated: 2023/02/13 19:26:10 by lrosa-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FIXED_H
# define FIXED_H

#include <iostream>
#include <string>
#include <cmath>

/*
This code implements a Fixed class, which represents a fixed-point number with a specified number of bits. 
The number of bits is specified by the static member variable s_bits, which is set to 8.

The class provides several constructors to create a Fixed object from an integer, float or another Fixed object. 
It provides a destructor and an assignment operator. The class provides functions to convert the fixed-point 
number to an integer or float, and to set the raw bits directly.

The class also provides methods to perform arithmetic operations between two Fixed objects, 
such as addition, subtraction, multiplication, and division.

The class provides methods to find the minimum and maximum of two Fixed objects, as well as comparison 
operators such as less than, greater than, equal to, not equal to, less than or equal to, and greater than or equal to.

The class provides an ostream operator to output a Fixed object as a float.
*/
class Fixed
{
	private:
		int			m_value;
		static int 	s_bits;
	public:
	Fixed();
	Fixed(const int n);
	Fixed(const float f);
	Fixed(const Fixed &h);
	Fixed& operator=(const Fixed &h);
	~Fixed();
	
	int getRawBits(void) const;
	void setRawBits(const int raw);
	
	//convert
	int toInt(void) const;
	float toFloat(void) const;

    
	void setFloat( float value);
    void setInt( int value);
    
	
	//increment/decrement
	Fixed operator++();
	Fixed operator++(int);
	Fixed operator--();
	Fixed operator--(int);
	
	static Fixed& max(Fixed &one, Fixed &two);
	static Fixed& min(Fixed &one, Fixed &two);
	static const Fixed& max(const Fixed &one, const Fixed  &two);
	static const Fixed& min(const Fixed &one, const Fixed  &two);
};

std::ostream &operator<<(std::ostream &out, const Fixed &f);
bool operator<(Fixed one, Fixed two);
bool operator>(Fixed one, Fixed two);
bool operator>=(Fixed one, Fixed two);
bool operator<=(Fixed one, Fixed two);
bool operator==(Fixed one, Fixed two);
bool operator!=(Fixed one, Fixed two);
float operator+(Fixed one, Fixed two);
float operator-(Fixed one, Fixed two);
float operator*(Fixed one, Fixed two);
float operator/(Fixed one, Fixed two);

#endif
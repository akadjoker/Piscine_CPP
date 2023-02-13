/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 13:04:40 by lrosa-do          #+#    #+#             */
/*   Updated: 2023/02/13 19:25:44 by lrosa-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <iostream>
#include <string>
#include <cmath>

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
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 13:08:20 by lrosa-do          #+#    #+#             */
/*   Updated: 2023/02/05 15:54:58 by lrosa-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int Fixed::s_bits = 8;

Fixed::Fixed(): m_value(0)
{

}

Fixed::Fixed(const Fixed &h): m_value(h.m_value)
{
	
}

Fixed::Fixed(const int n)
{
	this->m_value = (n * (1 << Fixed::s_bits));
	
}

Fixed::Fixed(const float f)
{
	this->m_value = (int)roundf(f * (1 <<  Fixed::s_bits));
}

Fixed::~Fixed()
{
}

Fixed& Fixed::operator=(const Fixed &h)
{
	if (this != &h)
		this->m_value = h.m_value;
	return (*this);
}

int Fixed::getRawBits(void) const
{
	return (this->m_value);
}

void Fixed::setRawBits(const int raw)
{
	this->m_value = raw;
}

int Fixed::toInt(void) const
{
	
	return  this->m_value / (1 << Fixed::s_bits);
	
	
}

float Fixed::toFloat(void) const
{
	
	return (float)((float)this->m_value / (1 << Fixed::s_bits));
	
}

std::ostream &operator<<(std::ostream &out, const Fixed &f)
{
	out << f.toFloat();
	return out;
}


/*
Limits
*/

Fixed const &Fixed::max(Fixed const &one, Fixed const &two)
{
	if (one.toFloat() > two.toFloat())
		return (one);
	return(two);
}
Fixed const &Fixed::min(Fixed const &one, Fixed const &two)
{
	if (one.toFloat() > two.toFloat())
		return (two);
	return(one);
}

Fixed& Fixed::max(Fixed &one, Fixed &two)
{
	if (one.toFloat() > two.toFloat())
		return (one);
	return(two);
}

Fixed& Fixed::min(Fixed &one, Fixed &two)
{
	if (one.toFloat() > two.toFloat())
		return (two);
	return(one);
}
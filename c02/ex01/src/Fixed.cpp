/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 19:25:04 by lrosa-do          #+#    #+#             */
/*   Updated: 2023/02/13 19:25:06 by lrosa-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int Fixed::s_bits = 8;

Fixed::Fixed(): m_value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &h): m_value(h.m_value)
{
	std::cout << "Copy constructor called" << std::endl;
}

/*
 The constant "1" is used to ensure that the number is multiplied by a power of two,
  which is what is needed to perform the conversion.
*/
Fixed::Fixed(const int n)
{
	this->m_value = (n * (1 << Fixed::s_bits));
	std::cout << "Int constructor called" << std::endl;
}


Fixed::Fixed(const float f)
{
	this->m_value = (int)roundf(f * (1 << Fixed::s_bits));
	std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed &h)
{
	std::cout << "Copy assignment operator called" << std::endl;
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
	return this->m_value / (1 << Fixed::s_bits);
}

/*
The function divides m_value by 1 << Fixed::s_bits to get the decimal representation of the fixed integer
*/
float Fixed::toFloat(void) const
{
	return  (float)((float)this->m_value / (1 << Fixed::s_bits));
}

std::ostream &operator << (std::ostream &out, Fixed const &f)
{
	out << f.toFloat();
	return out;
}
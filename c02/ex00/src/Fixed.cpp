/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 13:01:45 by lrosa-do          #+#    #+#             */
/*   Updated: 2023/02/13 19:24:28 by lrosa-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int Fixed::s_bits = 8;

Fixed::Fixed(): m_value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &h)
{
	std::cout << "Copy constructor called" << std::endl;
	this->m_value = h.getRawBits();
}

Fixed& Fixed::operator=(const Fixed &h)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &h)
	{
		this->m_value = h.m_value;
	}
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->m_value);
}

void Fixed::setRawBits(const int raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->m_value = raw;
}

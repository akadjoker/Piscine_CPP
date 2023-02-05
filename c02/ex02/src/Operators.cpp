/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Operators.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 13:08:38 by lrosa-do          #+#    #+#             */
/*   Updated: 2023/02/05 13:17:29 by lrosa-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/*
The 6 comparison operators: >, <, >=, <=, == and !=.
*/

float operator+(Fixed one, Fixed two)
{
	return(one.toFloat() + two.toFloat());
}

float operator-(Fixed one, Fixed two)
{
	return(one.toFloat() - two.toFloat());
}

float operator*(Fixed one, Fixed two)
{
	return(one.toFloat() * two.toFloat());
}

float operator/(Fixed one, Fixed two)
{
	return(one.toFloat() / two.toFloat());
}

/*
The 6 comparison operators: >, <, >=, <=, == and !=.
*/
bool operator<(Fixed one, Fixed two)
{
	if (one.toFloat() < two.toFloat())
		return true;
	return false;
}

bool operator>(Fixed one, Fixed two)
{
	if (one.toFloat() > two.toFloat())
		return true;
	return false;
}

bool operator>=(Fixed one, Fixed two)
{
	if (one.toFloat() >= two.toFloat())
		return true;
	return false;
}

bool operator<=(Fixed one, Fixed two)
{
	if (one.toFloat() <= two.toFloat())
		return true;
	return false;
}

bool operator==(Fixed one, Fixed two)
{
	if (one.toFloat() == two.toFloat())
		return true;
	return false;
}

bool operator!=(Fixed one, Fixed two)
{
	if (one.toFloat() != two.toFloat())
		return true;
	return false;
}

/*
The 4 increment/decrement (pre-increment and post-increment, pre-decrement and post-decrement) operators
*/
Fixed Fixed::operator++()
{
	this->m_value++;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed tmp(*this);
	this->m_value++;
	return (tmp);
}

Fixed Fixed::operator--()
{
	this->m_value--;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed tmp(*this);
	this->m_value--;
	return (tmp);
}
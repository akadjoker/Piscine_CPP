/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 12:43:09 by lrosa-do          #+#    #+#             */
/*   Updated: 2023/02/14 12:59:34 by lrosa-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	std::cout << "WrongCat default constructor called" << std::endl;
	this->type = "WrongCat";
}

WrongCat::WrongCat(WrongCat const& cat) : WrongAnimal() 
{
	std::cout << "WrongCat copy constructor called" << std::endl;
	*this = cat;
}

WrongCat::~WrongCat(void) 
{
	std::cout << "WrongCat destructor called" << std::endl;
}

void	WrongCat::operator=(WrongCat const& rhs) 
{
	this->type = rhs.type;
}

void	WrongCat::makeSound(void) const 
{
	std::cout << "Miaux! Miaux!" << std::endl;
}

std::string	WrongCat::getType(void) const 
{
	return this->type;
}

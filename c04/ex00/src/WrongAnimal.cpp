/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 12:43:09 by lrosa-do          #+#    #+#             */
/*   Updated: 2023/02/14 12:59:13 by lrosa-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) 
{
	std::cout << "WrongAnimal default constructor called" << std::endl;
	this->type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(WrongAnimal const& animal) 
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = animal;
}

WrongAnimal::~WrongAnimal(void) 
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

void	WrongAnimal::operator=(WrongAnimal const& rhs) 
{
	this->type = rhs.type;
}

void	WrongAnimal::makeSound(void) const 
{
	std::cout << "This is the wrong function call" << std::endl;
}

std::string	WrongAnimal::getType(void) const 
{
	return this->type;
}

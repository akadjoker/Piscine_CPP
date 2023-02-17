/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 12:43:09 by lrosa-do          #+#    #+#             */
/*   Updated: 2023/02/17 11:27:28 by lrosa-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) 
{
	std::cout << "Animal default constructor called" << std::endl;
	this->type = "Animal";
}

Animal::Animal(Animal const& animal)
 {
	std::cout << "Animal copy constructor called" << std::endl;
	*this = animal;
}

Animal::~Animal(void) 
{
	std::cout << "Animal destructor called" << std::endl;
}

Animal& Animal::operator=(Animal const& rhs)
 {
	this->type = rhs.type;
	return *this;
}

void Animal::makeSound(void) const 
{
	std::cout << "Boom!!" << std::endl;
}

std::string	Animal::getType(void) const 
{
	return this->type;
}

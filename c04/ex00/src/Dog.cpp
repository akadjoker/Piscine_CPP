/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 12:43:09 by lrosa-do          #+#    #+#             */
/*   Updated: 2023/02/14 12:57:39 by lrosa-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Dog.hpp"

Dog::Dog(void) 
{
	std::cout << "Dog default constructor called" << std::endl;
	this->type = "Dog";
}

Dog::Dog(Dog const& dog) : Animal() 
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = dog;
}

Dog::~Dog(void) 
{
	std::cout << "Dog destructor called" << std::endl;
	return;
}

Dog& Dog::operator=(Dog const& rhs) 
{
	this->type = rhs.type;
	return *this;
}

void	Dog::makeSound(void) const 
{
	std::cout << "Whoof! Whoof! Whoof!" << std::endl;
}

std::string	Dog::getType(void) const 
{
	return this->type;
}

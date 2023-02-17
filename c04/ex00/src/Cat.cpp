/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 12:43:09 by lrosa-do          #+#    #+#             */
/*   Updated: 2023/02/14 12:59:28 by lrosa-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "Cat.hpp"

Cat::Cat(void) 
{
	std::cout << "Cat default constructor called" << std::endl;
	this->type = "Cat";
}

Cat::Cat(Cat const& cat) : Animal() 
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = cat;
}

Cat::~Cat(void) 
{
	std::cout << "Cat destructor called" << std::endl;
}

Cat& Cat::operator=(Cat const& rhs) 
{
	this->type = rhs.type;
	return *this;
}

void	Cat::makeSound(void) const 
{
	std::cout << "Miauuu!!" << std::endl;
}
std::string	Cat::getType(void) const 
{
	return this->type;
}

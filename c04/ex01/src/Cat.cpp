/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 12:43:09 by lrosa-do          #+#    #+#             */
/*   Updated: 2023/02/17 12:44:04 by lrosa-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "Cat.hpp"

Cat::Cat(void) 
{
	std::cout << "Cat default constructor called" << std::endl;
	this->type = "Cat";
	this->brain = new Brain;
}

Cat::Cat(const Cat &src) : Animal() 
{
	std::cout << "Cat copy constructor called" << std::endl;
	this->brain = new Brain;
	*this = src;
}

Cat::~Cat(void) 
{
	std::cout << "Cat destructor called" << std::endl;
	delete this->brain;
}

Cat& Cat::operator=(Cat const& rhs) 
{
	this->type   = rhs.type;
	*this->brain = *rhs.getBrain();
	return *this;
}


void	Cat::makeSound(void) const 
{
	std::cout << "Miauuu!!" << std::endl;
}
Brain* Cat::getBrain(void) const 
{
	return this->brain;
}
std::string	Cat::getType(void) const 
{
	return this->type;
}

std::string Cat::getIdea(int index) const
{
    return this->brain->getIdea(index);
}

void Cat::setIdea(int index, std::string idea)
{
    this->brain->setIdea(index, idea);
}
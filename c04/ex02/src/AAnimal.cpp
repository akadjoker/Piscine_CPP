/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 11:36:04 by lrosa-do          #+#    #+#             */
/*   Updated: 2023/02/17 11:36:55 by lrosa-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "AAnimal.hpp"

AAnimal::AAnimal(void) 
{
	std::cout << "Animal default constructor called" << std::endl;
	this->type = "Animal";
}

AAnimal::AAnimal(AAnimal const& animal) 
{
	std::cout << "Animal copy constructor called" << std::endl;
	*this = animal;
}

AAnimal::~AAnimal(void)
 {
	std::cout << "Animal destructor called" << std::endl;
}

AAnimal& AAnimal::operator=(AAnimal const& rhs) 
{
	this->type = rhs.type;
	return *this;
}

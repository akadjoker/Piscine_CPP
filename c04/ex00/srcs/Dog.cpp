/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 08:28:50 by lrosa-do          #+#    #+#             */
/*   Updated: 2023/02/11 08:28:53 by lrosa-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/Dog.hpp"

Dog::Dog() {
    this->type = "Dog";
    std::cout << "Default constructor called for Dog" << std::endl;
}

Dog::Dog(std::string type) {
    this->type = "Dog";
    std::cout << "Constructor called for Dog" << std::endl;
}

Dog &Dog::operator=(const Dog &rhs) {
    if (this == &rhs)
        return (*this);
    this->type = rhs.type;
    return (*this);
}

Dog::~Dog() {
    std::cout << "Destructor called for Dog" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "Wouaf Wouaf !" << std::endl;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 08:28:42 by lrosa-do          #+#    #+#             */
/*   Updated: 2023/02/11 08:28:46 by lrosa-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/Cat.hpp"

Cat::Cat() {
    this->type = "Cat";
    std::cout << "Default constructor called for cat" << std::endl;
}

Cat::Cat(std::string type) {
    this->type = "Cat";
    std::cout << "Constructor called for cat" << std::endl;
}

Cat &Cat::operator=(const Cat &rhs) {
    if (this == &rhs)
        return (*this);
    this->type = rhs.type;
    return (*this);
}

void Cat::makeSound() const
{
    std::cout << "Miaou Miaou !" << std::endl;
}

Cat::~Cat() {
    std::cout << "Destructor called for cat" << std::endl;
}

// functions



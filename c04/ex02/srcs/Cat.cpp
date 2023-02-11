/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 08:30:21 by lrosa-do          #+#    #+#             */
/*   Updated: 2023/02/11 08:32:06 by lrosa-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"
#include "../includes/project.h"

Cat::Cat() {
    this->type = "Cat";
    std::cout << "Default constructor called for cat" << std::endl;
    this->ownbrain = new Brain();
}

Cat::Cat(std::string type) {
    this->type = type;
    std::cout << "Constructor called for cat" << std::endl;
    this->ownbrain = new Brain();
}

Cat &Cat::operator=(const Cat &rhs) {
    if (this == &rhs)
        return (*this);
    type = rhs.type;
    brain_exchanger(*ownbrain, *rhs.ownbrain);
    return (*this);
}

Cat::~Cat() {
    delete ownbrain;
    std::cout << "Destructor called for cat" << std::endl;
}

void Cat::print_my_ideas(void)
{
  std::cout << "[IDEA]" << " from Cat : ";
  for (int i = 0; i < 100; i++)
    if (!ownbrain->ideas[i].empty())
        std::cout << "I'm a cat, I think that " << ownbrain->ideas[i] << std::endl;
}




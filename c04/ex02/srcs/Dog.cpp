/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 08:30:21 by lrosa-do          #+#    #+#             */
/*   Updated: 2023/02/11 08:32:08 by lrosa-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/project.h"

Dog::Dog() {
    this->type = "Dog";
    std::cout << "Default constructor called for Dog" << std::endl;
    this->ownbrain = new Brain();
}

Dog::Dog(std::string type) {
    this->type = type;
    std::cout << "Default constructor called for Dog" << std::endl;
    this->ownbrain = new Brain();
}

Dog &Dog::operator=(const Dog &rhs) {
    if (this == &rhs)
        return (*this);
    this->type = rhs.type;
    brain_exchanger(*ownbrain, *rhs.ownbrain);
    return (*this);
}

Dog::~Dog() {
    delete ownbrain;
    std::cout << "Destructor called for Dog" << std::endl;
}

void Dog::print_my_ideas(void)
{
std::cout << "[IDEA]" << " from Dog : ";
for (int i = 0; i < 100; i++)
  if (!ownbrain->ideas[i].empty())
    std::cout << "I'm a dog, I think that " << ownbrain->ideas[i] << std::endl;
}
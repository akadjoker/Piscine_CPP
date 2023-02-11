/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 08:30:21 by lrosa-do          #+#    #+#             */
/*   Updated: 2023/02/11 08:32:00 by lrosa-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


AAnimal::AAnimal() : type("AAnimal") {
    std::cout << "Default constructor called for AAnimal" << std::endl;
}

AAnimal::AAnimal(std::string type) : type(type) {
    std::cout << "Constructor called for AAnimal" << std::endl;
}

AAnimal &AAnimal::operator=(const AAnimal &rhs) {
    std::cout << "AAnimal COPY !!!!!!!!" << std::endl;
    if (this == &rhs)
        return (*this);
    this->type = rhs.type;
    return (*this);
}

AAnimal::~AAnimal() {
    std::cout << "Destructor called for AAnimal" << std::endl;
}

//functions

void AAnimal::makeSound() const
{
    if (!type.compare("Dog"))
        std::cout << "Wouaf Wouaf !" << std::endl;
    else if (!type.compare("Cat"))
        std::cout << "Miaou Miaou !" << std::endl;
}

std::string AAnimal::getType() const {
    return (type);
}
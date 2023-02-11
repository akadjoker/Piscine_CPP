/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 08:30:21 by lrosa-do          #+#    #+#             */
/*   Updated: 2023/02/11 08:31:03 by lrosa-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



WrongAnimal::WrongAnimal() :type("WrongAnimal") {
    std::cout << "Default constructor called for WrongAnimal" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : type(type) {
    std::cout << "Constructor called for WrongAnimal" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &rhs) {
    if (this == &rhs)
        return (*this);
    this->type = rhs.type;
    return (*this);
}

WrongAnimal::~WrongAnimal() {
    std::cout << "Destructor called for WrongAnimal" << std::endl;
}

//functions

void WrongAnimal::makeSound() const
{
    if (!type.compare("Dog"))
        std::cout << "Wouaf Wouaf !" << std::endl;
    else if (!type.compare("Cat"))
        std::cout << "Miaou Miaou !" << std::endl;
	else if (!type.compare("WrongAnimal"))
		std::cout << "*** Wrong ANimAl Noises ***" << std::endl;
}

std::string WrongAnimal::getType() const {
    return (type);
}
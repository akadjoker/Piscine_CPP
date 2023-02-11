/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 08:29:02 by lrosa-do          #+#    #+#             */
/*   Updated: 2023/02/11 08:29:06 by lrosa-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/WrongCat.hpp"

WrongCat::WrongCat() {
    std::cout << "Default constructor called for WrongCat" << std::endl;
}

WrongCat::WrongCat(std::string type) {
    std::cout << "Constructor called for WrongCat" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &rhs) {
    if (this == &rhs)
        return (*this);
    this->type = rhs.type;
    return (*this);
}

WrongCat::~WrongCat() {
    std::cout << "Destructor called for WrongCat" << std::endl;
}
void WrongCat::makeSound() const
{
	std::cout << "*** Wrong CAT Noises ***" << std::endl;
}
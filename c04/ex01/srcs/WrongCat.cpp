/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 08:30:21 by lrosa-do          #+#    #+#             */
/*   Updated: 2023/02/11 08:31:05 by lrosa-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


WrongCat::WrongCat() {
    std::cout << "Default constructor called for WrongCat" << std::endl;
}

WrongCat::WrongCat(std::string type) {
    this->type = type;
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
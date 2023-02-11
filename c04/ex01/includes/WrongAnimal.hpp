/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 08:30:10 by lrosa-do          #+#    #+#             */
/*   Updated: 2023/02/11 08:30:15 by lrosa-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CPP_WRONGANIMAL_HPP
#define CPP_WRONGANIMAL_HPP
#include <iostream>

class WrongAnimal {
protected:
    std::string     type;
public :
    WrongAnimal          ();
    WrongAnimal          (std::string type);
    WrongAnimal          &operator=(WrongAnimal const &rhs);
    ~WrongAnimal         ();
    void                makeSound() const;
    std::string         getType(void) const;
};


#endif //CPP_WRONGANIMAL_HPP

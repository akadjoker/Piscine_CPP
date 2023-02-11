/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 08:29:16 by lrosa-do          #+#    #+#             */
/*   Updated: 2023/02/11 08:29:21 by lrosa-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CPP_ANIMAL_HPP
#define CPP_ANIMAL_HPP
# include <iostream>


class Animal {
protected:
    std::string     type;
public :
    Animal          ();
    Animal          (std::string type);
    Animal          &operator=(Animal const &rhs);
    ~Animal         ();
    virtual void    makeSound() const;
    std::string     getType(void) const;
};


#endif //CPP_ANIMAL_HPP

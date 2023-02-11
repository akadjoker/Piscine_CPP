/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 08:29:27 by lrosa-do          #+#    #+#             */
/*   Updated: 2023/02/11 08:29:29 by lrosa-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP_DOG_HPP
#define CPP_DOG_HPP
# include "Animal.hpp"

class Dog : public Animal {

public :
    Dog          ();
    Dog          (std::string type);
    Dog          &operator=(Dog const &rhs);
    ~Dog         ();
    virtual void  makeSound() const;
};


#endif //CPP_DOG_HPP

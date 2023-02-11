/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 08:29:23 by lrosa-do          #+#    #+#             */
/*   Updated: 2023/02/11 08:29:24 by lrosa-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CPP_CAT_HPP
#define CPP_CAT_HPP
#include "Animal.hpp"


class Cat : public Animal {
public :
    Cat          ();
    Cat          (std::string type);
    Cat          &operator=(Cat const &rhs);
    ~Cat         ();
    virtual void  makeSound() const;
};


#endif //CPP_CAT_HPP

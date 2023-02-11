/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 08:29:37 by lrosa-do          #+#    #+#             */
/*   Updated: 2023/02/11 08:29:39 by lrosa-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP_WRONGCAT_HPP
#define CPP_WRONGCAT_HPP
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
public :
    WrongCat          ();
    WrongCat          (std::string type);
    WrongCat          &operator=(WrongCat const &rhs);
    ~WrongCat         ();
    void              makeSound(void) const;

};


#endif //CPP_WRONGCAT_HPP

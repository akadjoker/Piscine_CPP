/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 08:30:17 by lrosa-do          #+#    #+#             */
/*   Updated: 2023/02/11 08:30:19 by lrosa-do         ###   ########.fr       */
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

};


#endif //CPP_WRONGCAT_HPP

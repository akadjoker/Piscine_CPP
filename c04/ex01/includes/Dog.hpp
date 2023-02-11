/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 08:30:03 by lrosa-do          #+#    #+#             */
/*   Updated: 2023/02/11 08:30:05 by lrosa-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CPP_DOG_HPP
#define CPP_DOG_HPP
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal {

public :
    Dog          ();
    Dog          (std::string type);
    Dog          &operator=(Dog const &rhs);
    ~Dog         ();
    void         print_my_ideas(void);
private :
    Brain        *ownbrain;
};


#endif //CPP_DOG_HPP

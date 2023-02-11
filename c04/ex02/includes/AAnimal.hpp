/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 08:30:21 by lrosa-do          #+#    #+#             */
/*   Updated: 2023/02/11 08:31:35 by lrosa-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP_ANIMAL_HPP
#define CPP_ANIMAL_HPP
# include <iostream>


class AAnimal {
protected:
    std::string     type;
public :
    AAnimal          ();
    AAnimal          (std::string type);
    virtual AAnimal  &operator=(AAnimal const &rhs);
    virtual ~AAnimal ();
    virtual void        makeSound() const;
    std::string     getType(void) const;
    virtual void    print_my_ideas(void) = 0;
};


#endif //CPP_ANIMAL_HPP

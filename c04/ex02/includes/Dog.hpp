/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 08:30:21 by lrosa-do          #+#    #+#             */
/*   Updated: 2023/02/11 08:31:43 by lrosa-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define CPP_DOG_HPP
# include "AAnimal.hpp"
# include "Brain.hpp"

class Dog : public AAnimal {

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

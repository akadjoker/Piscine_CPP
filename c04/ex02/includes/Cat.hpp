/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 08:30:21 by lrosa-do          #+#    #+#             */
/*   Updated: 2023/02/11 08:31:41 by lrosa-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define CPP_CAT_HPP
#include "AAnimal.hpp"
#include "Brain.hpp"


class Cat : public AAnimal {
public :
    Cat          ();
    Cat          (std::string type);
    Cat          &operator=(Cat const &rhs);
    ~Cat();
    void         print_my_ideas(void);
private:
    Brain        *ownbrain;
};


#endif //CPP_CAT_HPP

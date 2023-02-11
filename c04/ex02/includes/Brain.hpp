/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 08:30:21 by lrosa-do          #+#    #+#             */
/*   Updated: 2023/02/11 08:31:38 by lrosa-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define CPP_BRAIN_HPP
#include <iostream>

class Brain {
private :
    std::string     get_my_idea(void);
public :
	Brain          ();
    Brain          (std::string type);
    Brain          &operator=(Brain const &rhs);
    ~Brain         ();
    std::string	   ideas[100];
};


#endif //CPP_BRAIN_HPP

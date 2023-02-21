/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 12:43:09 by lrosa-do          #+#    #+#             */
/*   Updated: 2023/02/21 09:59:02 by lrosa-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"

class Cat : public Animal
 {
public:
	Cat(void);
	Cat(Cat const& cat);
	~Cat(void);

	Cat& operator=(Cat const& rhs);

	void	makeSound(void) const;
	std::string		getType(void) const;
};

#endif

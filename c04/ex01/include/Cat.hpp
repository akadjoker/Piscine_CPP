/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 12:43:09 by lrosa-do          #+#    #+#             */
/*   Updated: 2023/02/21 10:06:33 by lrosa-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
 {
public:
	Cat(void);
	Cat(Cat const& cat);
	~Cat(void);

	Cat& operator=(Cat const& rhs);

	virtual void	makeSound(void) const;
	std::string		getType(void) const;

	Brain			*getBrain(void) const;
	std::string 	getIdea(int index) const;
	void    		setIdea(int index, std::string idea);

	private:
		Brain			*brain;
};

#endif

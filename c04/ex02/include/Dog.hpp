/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 12:43:09 by lrosa-do          #+#    #+#             */
/*   Updated: 2023/02/17 12:42:55 by lrosa-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include <string>
#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal
 {
public:
	Dog(void);
	Dog(Dog const& dog);
	~Dog(void);

	Dog& operator=(Dog const& rhs);

	virtual void	makeSound(void) const;
	std::string		getType(void) const;

	Brain			*getBrain(void) const;
	std::string 	getIdea(int index) const;
	void    		setIdea(int index, std::string idea);
private:
	Brain*			brain;
};

#endif

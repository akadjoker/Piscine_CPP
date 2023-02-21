/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 12:43:09 by lrosa-do          #+#    #+#             */
/*   Updated: 2023/02/21 09:59:05 by lrosa-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"

class Dog : public Animal
 {
public:
	Dog(void);
	Dog(Dog const& dog);
	~Dog(void);

	Dog& operator=(Dog const& rhs);

	void	makeSound(void) const;
	std::string		getType(void) const;
};

#endif

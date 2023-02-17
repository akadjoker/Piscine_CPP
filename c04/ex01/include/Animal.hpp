/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 12:42:53 by lrosa-do          #+#    #+#             */
/*   Updated: 2023/02/14 12:43:00 by lrosa-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal 
{
public:
	Animal(void);
	Animal(Animal const& animal);
	virtual ~Animal(void);

	Animal& operator=(Animal const& rhs);

	virtual void	makeSound(void) const;
	std::string		getType(void) const;

protected:
	std::string	type;
};

#endif

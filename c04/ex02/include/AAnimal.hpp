/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 11:32:29 by lrosa-do          #+#    #+#             */
/*   Updated: 2023/02/17 11:37:08 by lrosa-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef AANIMAL_HPP
# define AANIMAL_HPP

#include <iostream>
#include <string>

class AAnimal 
{
public:
	AAnimal(void);
	AAnimal(AAnimal const& animal);
	virtual ~AAnimal(void);

	AAnimal& operator=(AAnimal const& rhs);

	virtual void		makeSound(void) const = 0;
	virtual std::string	getType(void) const = 0;

protected:
	std::string	type;
};

#endif

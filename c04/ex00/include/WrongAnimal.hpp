/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 12:43:09 by lrosa-do          #+#    #+#             */
/*   Updated: 2023/02/14 12:43:32 by lrosa-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal 
{
public:
	WrongAnimal(void);
	WrongAnimal(WrongAnimal const& animal);
	~WrongAnimal(void);

	void	operator=(WrongAnimal const& rhs);

	void			makeSound(void) const;
	std::string		getType(void) const;

protected:
	std::string	type;
};

#endif

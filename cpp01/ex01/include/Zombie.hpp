/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 18:06:52 by lrosa-do          #+#    #+#             */
/*   Updated: 2023/02/04 10:01:44 by lrosa-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

class Zombie
{
public:

	// Constructor/Destructor
	Zombie(void);
	Zombie(std::string name);
	~Zombie(void);

	// Setters
	void setName(std::string name);

	// Getters
	void announce( void ) const;

private:

	std::string _name;
};

Zombie* zombieHorde(int N, std::string name);
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 18:06:52 by lrosa-do          #+#    #+#             */
/*   Updated: 2023/02/13 18:52:12 by lrosa-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <string>
#include <cstring>
#include <iostream>

class Zombie
{
public:


	Zombie(void);
	Zombie(std::string name);
	~Zombie(void);


	void setName(std::string name);


	void announce( void ) const;

private:

	std::string m_name;
};

Zombie* zombieHorde(int N, std::string name);
#endif

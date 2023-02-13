/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 18:09:44 by lrosa-do          #+#    #+#             */
/*   Updated: 2023/02/13 18:50:35 by lrosa-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <string>
#include <iostream>

class Zombie
{
public:
	Zombie(std::string name);
	~Zombie(void);
	void announce( void ) const;
private:

	std::string m_name;
};

Zombie* newZombie(std::string name);
void	randomChump(std::string name);

#endif
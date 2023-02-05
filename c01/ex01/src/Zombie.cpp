
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 18:06:52 by lrosa-do          #+#    #+#             */
/*   Updated: 2023/02/04 10:00:32 by lrosa-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
}

Zombie::Zombie(std::string name) :
	m_name(name)
{
}

Zombie::~Zombie( void )
{
	std::cout << "Zombie  '" << this->m_name << "' destroyed." << std::endl;
}

void Zombie::setName(std::string name)
{
	this->m_name = name;
}

void Zombie::announce( void ) const
{
	std::cout << m_name << " BraiiiiiiinnnzzzZ..." << std::endl;
}
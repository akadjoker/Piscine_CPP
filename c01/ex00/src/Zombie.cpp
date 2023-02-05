/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 18:06:52 by lrosa-do          #+#    #+#             */
/*   Updated: 2023/02/05 08:10:04 by lrosa-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) :
	m_name(name)
{
}

Zombie::~Zombie( void )
{
	std::cout << "Zombie  '" << this->m_name << "' destroyed." << std::endl;
}

void Zombie::announce( void ) const
{
	std::cout << this->m_name << " BraiiiiiiinnnzzzZ..." << std::endl;
}
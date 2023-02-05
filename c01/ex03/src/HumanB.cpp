/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 08:41:56 by lrosa-do          #+#    #+#             */
/*   Updated: 2023/02/05 08:45:00 by lrosa-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) :
	m_name(name)
{
}

HumanB::~HumanB()
{
}

void HumanB::setWeapon(Weapon& weapon)
{
	this->m_weapon = &weapon;
}

void HumanB::attack() 
{
	std::cout << this->m_name << " attacks with his ";
	if (this->m_weapon)
		std::cout << this->m_weapon->getType();
	else
		std::cout << "bare fists";
	std::cout << std::endl;
}
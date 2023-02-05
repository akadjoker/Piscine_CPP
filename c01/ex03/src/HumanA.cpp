/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 08:41:38 by lrosa-do          #+#    #+#             */
/*   Updated: 2023/02/05 08:41:49 by lrosa-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) :
	m_name(name), m_weapon(weapon)
{
}

HumanA::~HumanA(void)
{
}

void HumanA::attack() 
{
	std::cout << this->m_name << " attacks with his " << this->m_weapon.getType() << std::endl;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 08:42:28 by lrosa-do          #+#    #+#             */
/*   Updated: 2023/02/05 08:42:50 by lrosa-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) :
	m_type(type)
{
}

Weapon::~Weapon()
{
}

std::string const &Weapon::getType() const
{
	return this->m_type;
}

void Weapon::setType(std::string type)
{
	this->m_type = type;
}
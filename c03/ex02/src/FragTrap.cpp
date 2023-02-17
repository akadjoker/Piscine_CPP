/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 08:11:07 by lrosa-do          #+#    #+#             */
/*   Updated: 2023/02/13 20:26:53 by lrosa-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string &name):ClapTrap(name)
{
    this->m_name = name;
    this->m_hit_points = 100;
    this->m_attack_damage = 30;
    this->m_energy_points = 100;
    std::cout << "Fragtrap constructor called for " << m_name << std::endl;
}

FragTrap::FragTrap():ClapTrap()
{
    this->m_name = "base";
    this->m_hit_points = 100;
    this->m_attack_damage = 30;
    this->m_energy_points = 100;
    std::cout << "Fragtrap default constructor called for " << m_name << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "Fragtrap destructor called for " << m_name << std::endl;
}


FragTrap& FragTrap::operator=(const FragTrap &src) 
{
	this->m_name = src.m_name;
	this->m_hit_points = src.m_hit_points;
	this->m_energy_points = src.m_energy_points;
	this->m_attack_damage = src.m_attack_damage;
	return *this;
}


void FragTrap::highFivesGuys()
{
    if (m_hit_points)
        std::cout << this->m_name << " asks for a high five !" << std::endl;
    else
        std::cout << this->m_name << " is dead, can't high five !" << std::endl;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 08:11:07 by lrosa-do          #+#    #+#             */
/*   Updated: 2023/02/11 08:11:44 by lrosa-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name)
{
    this->m_name = name;
    this->m_hit_points = 100;
    this->m_attack_damage = 30;
    this->m_energy_points = 100;
    std::cout << "Fragtrap constructor called for " << m_name << std::endl;
}

FragTrap::FragTrap()
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

void FragTrap::highFivesGuys()
{
    if (m_hit_points)
        std::cout << this->m_name << " asks for a high five !" << std::endl;
    else
        std::cout << this->m_name << " is dead, can't high five !" << std::endl;
}
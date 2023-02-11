/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 07:55:40 by lrosa-do          #+#    #+#             */
/*   Updated: 2023/02/11 08:04:49 by lrosa-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string &name) : m_guardgate(false)
{
    m_name = name;
    m_energy_points = 10;
    m_attack_damage = 0;
    m_hit_points = 10;
    std::cout << "ScavTrap constructor called for " << m_name << std::endl;
}

ScavTrap::ScavTrap() : m_guardgate(false)
{
    std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor called" << std::endl;
}




void     ScavTrap::attack(const std::string &target)
{
    if (m_hit_points == 0)
        std::cout << "Scavtrap " << m_name << " is dead, he can't attack" << std::endl;
    else if (m_energy_points > 0) 
    {
        std::cout << "ScavTrap " << m_name << " attacks " << target << ", causing " << m_attack_damage << " points of damage! ";
        m_energy_points--;
        std::cout << m_energy_points << " energy points remaining" << std::endl;
    }
    else
        std::cout << "Scavtrap " << m_name << " has no more energy to attack, must be repaired" << std::endl;
}

void ScavTrap::guardGate()
{
    if (m_guardgate)
        m_guardgate = false;
    else
       m_guardgate = true;
    if (m_guardgate)
        std::cout << "Guardgate for Scavtrap " << m_name << " is now active"<< std::endl;
    else
        std::cout << "Guardgate for Scavtrap " << m_name << " is now disabled"<< std::endl;
}
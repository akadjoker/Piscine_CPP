/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 16:36:01 by lrosa-do          #+#    #+#             */
/*   Updated: 2023/02/13 20:07:53 by lrosa-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


ClapTrap::ClapTrap(const std::string &name) : m_name(name), m_hit_points(10), m_energy_points(10),m_attack_damage(0)
{
  std::cout << "ClapTrap " << m_name << " constructed." << std::endl;
}


ClapTrap::ClapTrap() : m_name("base"), m_hit_points(10), m_energy_points(10), m_attack_damage(0)
{
    std::cout << "ClapTrap " << m_name << " destructed." << std::endl; 
}


ClapTrap::ClapTrap(const ClapTrap &src) 
{
	std::cout << "copy constructor has been called" << std::endl; 
	*this = src;
}

ClapTrap::~ClapTrap()
{
    std::cout  << "ClapTrap "<< m_name << " destructor called." <<std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &src) 
{
	this->m_name = src.m_name;
	this->m_hit_points = src.m_hit_points;
	this->m_energy_points = src.m_energy_points;
	this->m_attack_damage = src.m_attack_damage;
	return *this;
}

void    ClapTrap::attack(const std::string &target)
{
    if (m_hit_points == 0)
        std::cout << m_name << " is dead, he can't attack" << std::endl;
    else if (m_energy_points > 0) 
    {
        std::cout << "ClapTrap " << m_name << " attacks " << target << ", causing " << m_attack_damage << " points of damage! ";
        m_energy_points--;
        std::cout << m_energy_points << " energy points remaining" << std::endl;
    }
    else
        std::cout << m_name << " has no more energy to attack, must be repaired" << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    if (this->m_hit_points == 0)
        std::cout <<m_name << " is already dead" << std::endl;
    else {
        if (!(m_hit_points - amount > m_hit_points) || m_hit_points - amount == 0) 
        {
            std::cout << "ClapTrap " << m_name << " is taking damage, loosing " << amount << " hit points ! ";
            m_hit_points -= amount;
            std::cout << m_hit_points << " hit points remaining" << std::endl;
        }
        else {
            m_hit_points = 0;
            std::cout << m_name << " is dead after taking damage !" << std::endl;
        }
    }
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (m_hit_points && m_energy_points) 
    {
        std::cout << "ClapTrap " << m_name << " being repaired, gaining " << amount << " hit points ! ";
        m_hit_points += amount;
        m_energy_points --;
        std::cout << m_hit_points << " remaining" << std::endl;
    }
    else
        std::cout << "ClapTrap " << m_name << " is already dead or have no more energy, can't repair" << std::endl;
}

std::string &ClapTrap::getName(void)
{
    return (this->m_name);
}
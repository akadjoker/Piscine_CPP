/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 16:35:51 by lrosa-do          #+#    #+#             */
/*   Updated: 2023/02/11 08:03:52 by lrosa-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once
#include <iostream>

class ClapTrap 
{
protected :
    std::string     m_name;
    unsigned int    m_hit_points;
    unsigned int    m_energy_points;
    unsigned int    m_attack_damage;

public :
    ClapTrap        ();
    ClapTrap        (const std::string &name);
    ~ClapTrap       ();

    void            attack(const std::string& target);
    void            takeDamage(unsigned int amount);
    void            beRepaired(unsigned int amount);
    std::string     &getName(void);
};



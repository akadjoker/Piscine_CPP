/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 07:54:56 by lrosa-do          #+#    #+#             */
/*   Updated: 2023/02/11 08:14:36 by lrosa-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap 
{
private :
    bool            m_guardgate;
public :
    ScavTrap        ();
    ScavTrap        (ScavTrap const &rhs);
    ScavTrap        (const std::string &name);

    ~ScavTrap       ();

    void            attack(const std::string &target);
    void            guardGate();
};



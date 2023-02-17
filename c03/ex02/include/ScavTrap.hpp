/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 07:54:56 by lrosa-do          #+#    #+#             */
/*   Updated: 2023/02/13 20:17:54 by lrosa-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SCAVTRAP_H
# define SCAVTRAP_H

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap 
{
private :
    bool            m_guardgate;
public :
    ScavTrap        ();
    ScavTrap        (const ScavTrap &src);
    ScavTrap        (const std::string &name);  
	~ScavTrap();
	ScavTrap& operator=(const ScavTrap &src);


    void            attack(const std::string &target);
    void            guardGate();
};


#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 07:53:55 by lrosa-do          #+#    #+#             */
/*   Updated: 2023/02/13 20:18:45 by lrosa-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main( void )
{
    ScavTrap a("luis");
    ClapTrap b("enemy");
    a.attack(b.getName());
    b.takeDamage(8);
    b.attack(a.getName());
    a.takeDamage(1);
    b.beRepaired(110);
    b.attack(a.getName());
    a.guardGate();
    a.takeDamage(2);

    ClapTrap c;
    ClapTrap d =c;
    d.takeDamage(5);

    ScavTrap e;
    ScavTrap f= e;
    f.beRepaired(5);

    return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 16:36:43 by lrosa-do          #+#    #+#             */
/*   Updated: 2023/02/11 07:50:44 by lrosa-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main( void )
{
    ClapTrap claptrap1("luis");
    ClapTrap claptrap2("enemy");

  claptrap1.attack(claptrap2.getName());
  claptrap1.attack(claptrap2.getName());
  
  claptrap2.takeDamage(5);
  claptrap2.beRepaired(3);
  claptrap2.attack(claptrap1.getName());
  
  claptrap1.takeDamage(10);
  claptrap1.beRepaired(10);

    return (0);
}
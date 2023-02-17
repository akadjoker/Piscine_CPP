/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 16:35:51 by lrosa-do          #+#    #+#             */
/*   Updated: 2023/02/14 12:25:51 by lrosa-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

/*
-Wshadow habilita o aviso para quando uma variável local ou
parâmetro de função tem o mesmo 
nome que uma variável externa ou de escopo superior, o que pode
 levar a erros sutis e difíceis de encontrar.

-Wno-shadow desabilita esse aviso, ou seja, ele não emitirá avisos 
relacionados ao sombreamento de variáveis no código.
*/

#include <iostream>

class ClapTrap {
private :
    std::string     m_name;
    unsigned int    m_hit_points;
    unsigned int    m_energy_points;
    unsigned int    m_attack_damage;

public :
    ClapTrap        ();
    ClapTrap        (const std::string &name);
    ClapTrap        (const ClapTrap &src);
    ~ClapTrap       ();
    ClapTrap	&operator=(const ClapTrap  &src);

    void            attack(const std::string &target);
    void            takeDamage(unsigned int amount);
    void            beRepaired(unsigned int amount);
    std::string     &getName(void);
};

#endif

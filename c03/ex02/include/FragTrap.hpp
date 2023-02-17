/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 16:35:51 by lrosa-do          #+#    #+#             */
/*   Updated: 2023/02/13 20:29:16 by lrosa-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef FRAGTRAP_H
# define FRAGTRAP_H

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap 
{
public :
    FragTrap            ();
    FragTrap            (const std::string &name);
    FragTrap            (const FragTrap &src);
    ~FragTrap(void);
    FragTrap & operator=(const FragTrap  &src);

public :
    void                highFivesGuys(void);
};


#endif
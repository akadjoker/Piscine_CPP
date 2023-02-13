/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 08:38:59 by lrosa-do          #+#    #+#             */
/*   Updated: 2023/02/13 18:58:07 by lrosa-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
public:
	
	HumanA(std::string name, Weapon& weapon);
	~HumanA(void);
	void attack();
private:
	std::string m_name;
	Weapon& m_weapon;
};

#endif

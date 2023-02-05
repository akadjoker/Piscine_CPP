/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 08:39:20 by lrosa-do          #+#    #+#             */
/*   Updated: 2023/02/05 08:43:25 by lrosa-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>

class Weapon
{
public:
	Weapon(std::string type);
	~Weapon();

	std::string const &getType(void) const;
	void setType(std::string type);

private:
	std::string m_type;
};
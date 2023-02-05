/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 11:15:50 by lrosa-do          #+#    #+#             */
/*   Updated: 2023/02/05 11:28:28 by lrosa-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

class Harl
{
public:
	Harl();
	~Harl();

	void complain(const std::string &level);

private:
	void debug();
	void info();
	void warning();
	void error();
private:
	typedef void (Harl::*func)(void);
    func m_func[4];
	std::string m_name[4];

};
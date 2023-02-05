/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 11:16:19 by lrosa-do          #+#    #+#             */
/*   Updated: 2023/02/05 12:04:53 by lrosa-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include "Colors.hpp"

Harl::Harl()
{
	m_func[0] = &Harl::debug;
    m_func[1] = &Harl::info;
    m_func[2] = &Harl::warning;
    m_func[3] = &Harl::error;

	m_name[0] = "DEBUG";
    m_name[1] = "INFO";
    m_name[2] = "WARNING";
    m_name[3] = "ERROR";
}

Harl::~Harl()
{
}

void Harl::complain(const std::string &level)
{
	for (unsigned int i = 0; i < 4; ++i)
    {
        if (m_name[i].compare(level) == 0)
		{
			(this->*m_func[i])();
			break;
		}
    }
}

void Harl::debug()
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info()
{
	std::cout << "I cannot believe adding extra bacon costs more money." << std::endl;
	std::cout << "You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning()
{
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
	std::cout << "I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error()
{
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}
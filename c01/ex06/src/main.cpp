/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 11:17:12 by lrosa-do          #+#    #+#             */
/*   Updated: 2023/02/05 12:05:31 by lrosa-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include "Colors.hpp"

int main(int argc, char **argv)
{
	Harl harl;


	std::string names[4] = 
	{
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};
	
	if (argc == 2)
	{
		int index = -1;
		std::string value(argv[1]);
		
		for (unsigned int i = 0; i < 4; ++i)
		{
			if (names[i].compare(value) == 0)
			{
				index = i;
				break;
			}
		}

		switch (index)
		{
			case 0:
			{
				std::cout << BLUE << "[ " << names[0] << " ]" << RESET << std::endl;
				harl.complain(names[0]);
				std::cout << std::endl;
			}break;
		
			case 1:
			{
				std::cout << GREEN << "[ " << names[1] << " ]"<< RESET << std::endl;
				harl.complain(names[1]);
				std::cout << std::endl;
			}break;
			
			case 2:
			{
				std::cout << MAGENTA << "[ " << names[2] << " ]"<< RESET << std::endl;
				harl.complain(names[2]);
				std::cout << std::endl;
			}break;
		
			case 3:
			{
				std::cout <<RED << "[ " << names[3] << " ]"<< RESET << std::endl;
				harl.complain(names[3]);
				std::cout << std::endl;
			}break;
		
			default:
			{
				std::cout <<YELLOW << "[ Probably complaining about insignificant problems ]"<< RESET << std::endl;
			
			}	break;
		}
		std::cout << RESET;
	}
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 11:17:12 by lrosa-do          #+#    #+#             */
/*   Updated: 2023/02/05 11:39:01 by lrosa-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include "Colors.hpp"

int main()
{
	Harl harl;

	
	std::cout << BLUE << "DEBUG: " ;
	harl.complain("DEBUG");
	
	
	std::cout << GREEN << "INFO: " ;
	harl.complain("INFO");


	std::cout << MAGENTA << "WARNING: " ;
	harl.complain("WARNING");

	
	std::cout << RED << "ERROR: " ;
	harl.complain("ERROR");

	std::cout << RESET;
}
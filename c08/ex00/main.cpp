/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 14:32:38 by lrosa-do          #+#    #+#             */
/*   Updated: 2023/02/22 14:56:33 by lrosa-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
	std::cout << " *** Teste vector container *** " << std::endl;
	try
	{
		std::vector<int> v(6);
		
		v[0] = 1;
		v[1] = 4;
		v[2] = 7;
		v[3] = 8;
		v[5] = 1478;
		

		std::vector<int>::iterator tmp;
		std::cout << "Searching for (1478) " << std::endl;
		tmp = easyfind(v, 1478);
		std::cout << " found : " << *tmp << std::endl;

		
		std::cout << "Searching for (2023) " << std::endl;
		tmp = easyfind(v, 2023);
		std::cout << " found : " << *tmp << std::endl;

		
	}
	catch (std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}

		std::cout << " *** Teste list container *** " << std::endl;


	try
	{
		std::list<int> lista;
		lista.push_back(0);
		lista.push_back(1);
		lista.push_back(4);
		lista.push_back(1978);
		lista.push_back(8);

		

	
		std::list<int>::iterator tmp;
		std::cout << "Searching for (1478) " << std::endl;
		tmp = easyfind(lista, 1478);
		std::cout << " found : " << *tmp << std::endl;

		
		std::cout << "Searching for (2023) " << std::endl;
		tmp = easyfind(lista, 2023);
		std::cout << " found : " << *tmp << std::endl;

			
	}
	catch (std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}

	


}
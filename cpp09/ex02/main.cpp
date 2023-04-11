/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 10:01:48 by lrosa-do          #+#    #+#             */
/*   Updated: 2023/04/11 09:29:53 by lrosa-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"


int main(int ac, char **av)
{
	try
	{
		if (ac < 2)
			throw "Error: not the right number of arguments.";
		PmergeMe test;
		test.sort(av);

	}
	catch(const char *str)
	{
		std::cerr << str << std::endl;
		return 1;
	}

	return (0);
}

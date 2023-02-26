/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 17:33:17 by lrosa-do          #+#    #+#             */
/*   Updated: 2023/02/26 12:55:45 by lrosa-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

class NotFound : public std::exception 
{
	virtual const char* what() const throw();
};
const char* NotFound::what() const throw() 
{
	return ("\e[0;31m Error: Value not found. \e[0m");
}

template <typename T>
int easyfind(T& cont, int n)
{
	typename T::iterator it;

	try 
	{
		it = std::find(cont.begin(), cont.end(), n);

		if (*it != n || it == cont.end())
			throw NotFound();
		//find the value so, get the index of the bad boy :P (current - last count && get the index simples :P )
		if (it != cont.end()) 
			return (it - cont.begin());
	}
	catch (std::exception &e) 
	{
		std::cout << e.what() << std::endl;
		return -1;
	}
	

	return -1;
}

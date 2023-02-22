/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 14:30:48 by lrosa-do          #+#    #+#             */
/*   Updated: 2023/02/22 14:53:27 by lrosa-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include <list>
#include <vector>
#include <algorithm>
#include <stdexcept>

class NotFound : public std::exception 
{
	virtual const char* what() const throw() 
	{
		
		return ("\e[0;38;5;9m Content not found \n\e[0m");
    }
};




template<typename T>
typename T::iterator easyfind(T& container, int value)
{
    typename T::iterator it = std::find(container.begin(), container.end(), value);
    if (it == container.end()) 
	{
       throw NotFound();
    }
    return it;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 17:33:17 by lrosa-do          #+#    #+#             */
/*   Updated: 2023/02/26 11:34:39 by lrosa-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <string>

template< typename T>
void	iter(T* array, const unsigned int length, void (*func)(T&))
{
    if (!array)
		return;
	for (unsigned int i = 0; i < length; i++) {
		try 
        {
			func(array[i]);
		} catch(const std::exception &e) 
        {
			std::cout << "Error (iter): " << e.what() << std::endl;
		}
	}
}

template<typename T>
void display(T& value) 
{
    std::cout << value << std::endl;
}


#endif

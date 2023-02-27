/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 17:33:17 by lrosa-do          #+#    #+#             */
/*   Updated: 2023/02/27 07:38:53 by lrosa-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <string>




template< typename T>
void	iter(T* array, unsigned int length, void (*func)(T&))
{
    if (array != NULL)
	{
		for (unsigned int i = 0; i < length; i++) 
		{
			func(array[i]);
		}
	}
	
}

template<typename T>
void display(T& value) 
{
    std::cout << value << std::endl;
}


#endif

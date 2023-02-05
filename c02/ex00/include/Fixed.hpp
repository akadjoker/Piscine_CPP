/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 12:36:12 by lrosa-do          #+#    #+#             */
/*   Updated: 2023/02/05 12:44:18 by lrosa-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>

class Fixed
{
	public:
		Fixed(); //default constrcutor
		
		Fixed(const Fixed &h); //copy contructor
		
		Fixed& operator = (const Fixed &h); // equal operator
		
		~Fixed(); //destructor

		int getRawBits(void) const;
		void setRawBits(const int raw);
	private:
		int			m_value;
		static int 	s_bits;

};

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 12:54:52 by lrosa-do          #+#    #+#             */
/*   Updated: 2023/02/21 15:05:36 by lrosa-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CONVERSION_HPP
# define CONVERSION_HPP

#include <iostream>
#include <string>
#include <sstream>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <climits>
#include <float.h>

class Conversion
{
	public:

	Conversion(char *input);
	Conversion(Conversion &c);
	Conversion &operator=(Conversion &c);
	~Conversion();

	char* getStr();
	int getInt();
	char getChar();
	float getFloat();
	double getDouble();

	void convertChar();
	void convertInt();
	void convertFloat();
	void convertDouble();

	void print();

	private:

        char    *str;
        char    c_char;
        int     c_int;
        float   c_float;
        double  c_double;
};
#endif

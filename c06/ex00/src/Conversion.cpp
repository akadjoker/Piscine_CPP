/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 12:54:52 by lrosa-do          #+#    #+#             */
/*   Updated: 2023/02/21 15:00:43 by lrosa-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

Conversion::Conversion(char *input) : str(input)
{
}
Conversion::Conversion(Conversion &c) : str(c.getStr()), c_char(c.getChar()), c_int(c.getInt()), c_float(c.getFloat()), c_double(c.getDouble())
{
}

Conversion &Conversion::operator=(Conversion &c)
{
    if (this != &c)
    {
        this->str = c.getStr();
        this->c_int = c.getInt();
        this->c_char = c.getChar();
        this->c_float = c.getFloat();
        this->c_double = c.getDouble();
    }
    return (*this);
}
Conversion::~Conversion() {}

char *Conversion::getStr() { return this->str; }
char Conversion::getChar() { return this->c_char; }
int Conversion::getInt() { return this->c_int; }
float Conversion::getFloat() { return this->c_float; }
double Conversion::getDouble() { return this->c_double; }

void Conversion::convertChar() { this->c_char = static_cast<char>(this->c_double); }

void Conversion::convertInt() { this->c_int = static_cast<int>(this->c_double); }

void Conversion::convertFloat() { this->c_float = static_cast<float>(this->c_double); }

void Conversion::convertDouble() { this->c_double = atof(this->str); }


/*
std::isfinite
1-3) Determines if the given floating point number arg has finite value i.e.
 it is normal, subnormal or zero, but not infinite or NaN.
4) A set of overloads or a function template accepting the arg argument of any
 integral type. Equivalent to (2) (the argument is cast to double). 

protect char 0,126
protect int -min_int, max_int
protect double/float
*/
void Conversion::print()
{
    if (strlen(this->str) == 1 && !(this->str[0] >= '0' && this->str[0] <= '9'))
    {
        if (!(this->str[0] >= 32 && this->str[0] <= 126))
        {
            std::cout << "Cannot convert non printable char, please enter valid argument" << std::endl;
            return;
        }
        this->c_char = this->str[0];
        this->c_int = static_cast<int>(this->str[0]);
        this->c_float = static_cast<float>(this->c_int);
        this->c_double = static_cast<double>(this->c_int);
    }
    else
    {
        convertDouble();
        convertChar();
        convertInt();
        convertFloat();
    }
    std::cout.precision(1);
    if (!(this->c_int >= 0 && this->c_int <= 255))
        std::cout << "char: impossible" << std::endl;
    else if (!(this->c_int >= 32 && this->c_int <= 126))
        std::cout << "char: Non displayable" << std::endl;
    else
        std::cout << "char: '" << this->c_char << "'" << std::endl;
    if (!(this->c_double >= INT_MIN && this->c_double <= INT_MAX) && std::isfinite(this->c_int))
        std::cout << "int: impossible" << std::endl;
    else
        std::cout << "int: " << this->c_int << std::endl;
    if (!(this->c_double >= -FLT_MAX && this->c_double <= FLT_MAX) && std::isfinite(this->c_float))
        std::cout << "float: impossible" << std::endl;
    else
        std::cout << "float: " << std::fixed << this->c_float << "f" << std::endl;
    if (!(this->c_double >= -DBL_MAX && this->c_double <= DBL_MAX) && std::isfinite(this->c_double))
        std::cout << "double: impossible" << std::endl;
    else
        std::cout << "double: " << std::fixed << this->c_double << std::endl;
}

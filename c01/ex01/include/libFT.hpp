/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libFT.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 08:27:11 by lrosa-do          #+#    #+#             */
/*   Updated: 2023/02/13 18:51:47 by lrosa-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <sstream>
namespace FT
{

//https://tylerayoung.com/2014/05/02/stupid-type-conversions-in-c98/
//https://doc.zeroc.com/ice/3.7/language-mappings/c++98-mapping

template<typename T>
inline std::string to_string(const T & value) 
{
    std::ostringstream oss;
    oss << value;
    return oss.str();
}

inline int stoi( std::string & s ) 
{
    int i;
    std::istringstream(s) >> i;
    return i;
}


} // namespace FT
#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 17:33:17 by lrosa-do          #+#    #+#             */
/*   Updated: 2023/02/27 07:22:42 by lrosa-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>
#include <string>

template<typename T>
void swap(T& a, T& b)
{
    T tmp;
    tmp = a;
    a = b;
    b = tmp;
}

template<typename T>
T min(T& a, T& b)
{
    if (b > a)
        return (a);
    else
        return (b);
}

template<typename T>
T max(T& a, T& b)
{
    if (a > b)
        return (a);
    else
        return (b);
}
#endif

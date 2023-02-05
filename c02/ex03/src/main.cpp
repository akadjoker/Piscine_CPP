/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 14:49:53 by lrosa-do          #+#    #+#             */
/*   Updated: 2023/02/05 15:39:44 by lrosa-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "Point.hpp"

int main( void )
{
    {
    Point a(10,30);
    Point b(0,0);
    Point c(20,0);

    Point x(10, 15);

        if (Point::bsp(a,b,c,x))
            std::cout << "the point x  IS inside the ABC triangle" << std::endl;
        else
            std::cout << "the point x  is NOT inside the ABC triangle" << std::endl;
        }
    
    {
    Point a(0, 0);
    Point b(4, 0);
    Point c(0, 3);
    Point point(6, 1);
  
        if (Point::bsp(a, b, c, point)) 
            std::cout << "the point x  IS inside the ABC triangle" << std::endl;
         else 
            std::cout << "the point x  is NOT inside the ABC triangle " << std::endl;
        
    }
    
}
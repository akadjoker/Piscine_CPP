/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 17:33:17 by lrosa-do          #+#    #+#             */
/*   Updated: 2023/02/27 07:22:32 by lrosa-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Whatever.hpp"

int main( ) 
{
{
     std::cout << " *************** TEST 1 ******************" << std::endl;
    int a = 2;
    int b = 3;
    ::swap( a, b );
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

      std::cout << " *************** TEST 2 ******************" << std::endl;
      
    std::string c = "chaine1";
    std::string d = "chaine2";
    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
}
{
     std::cout << " *************** TEST 3 ******************" << std::endl;
    float a = -0.2f;
    float b = 3.001f;
    ::swap( a, b );
    std::cout << "a = "<<std::fixed << a <<"f, b = " << b <<"f"<< std::endl;
    std::cout << "min( a, b ) = "<<std::fixed << ::min( a, b )<<"f" << std::endl;
    std::cout << "max( a, b ) = "<<std::fixed << ::max( a, b )<<"f" << std::endl;
}
{
     std::cout << " *************** TEST 4 ******************" << std::endl;
    double a = -0.2;
    double b = 3.00f;
    ::swap( a, b );
    std::cout << "a = "<<std::fixed << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = "<<std::fixed << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = "<<std::fixed << ::max( a, b ) << std::endl;
}

    return 0;
}
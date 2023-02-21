/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   implementation.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 12:49:53 by lrosa-do          #+#    #+#             */
/*   Updated: 2023/02/21 16:21:42 by lrosa-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"


Base* generate() 
{
    srand(time(0));
    int randNum = rand() % 3;
    switch(randNum) 
    {
        case 0:
            return new A();
        case 1:
            return new B();
        default:
            return new C();
    }
}

void identify(Base* p)
 {
    if(dynamic_cast<A*>(p)) 
    {
        std::cout << "Pointer : A" << std::endl;
    } else if(dynamic_cast<B*>(p)) 
    {
        std::cout << "Pointer : B" << std::endl;
    } else if(dynamic_cast<C*>(p))
    {
        std::cout << "Pointer : C" << std::endl;
    } else 
    {
        std::cout << "Unknown pointer type" << std::endl;
    }
}

void identify(Base& p) 
{
  	try 
	{
		dynamic_cast<A &>(p);
		std::cout << "Reference : A" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << " Not A" << std::endl;
	}
	try 
	{
		dynamic_cast<B &>(p);
		std::cout << "Reference : B" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << " Not B" << std::endl;
	}
	try 
	{
		dynamic_cast<C &>(p);
		std::cout << "Reference : C" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << " Not C" << std::endl;
	}
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 12:49:39 by lrosa-do          #+#    #+#             */
/*   Updated: 2023/02/21 16:19:24 by lrosa-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

# define PINK			"\e[0;38;5;199m"
# define GREEN			"\e[0;32m"

#define MAX_TEST 5 

int main (void)
{
    for (int i=0;i<MAX_TEST;i++)
    {
	  std::cout <<"------------------------------------------------"<< std::endl;
	  std::cout << PINK<<"Teste (" << i<< ")  \e[0m"<< std::endl;
		
        Base *base = generate();

        identify(base);
        identify(*base);

        delete (base);
      	std::cout << std::endl;
	
	}
    
    return (0);
}

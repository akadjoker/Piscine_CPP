/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 17:33:17 by lrosa-do          #+#    #+#             */
/*   Updated: 2023/02/26 12:08:36 by lrosa-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <cstdlib>
#include <iostream>
#include <Array.hpp>

int my_testes()
{
        std::cout << " *************** TEST 1 ******************" << std::endl;
 
  
    Array<int> intArray(5);
    for (unsigned int i = 0; i < intArray.size(); i++)
    {
        intArray[i] = i * 2;
    }
    
    // Create a copy of the integer array
    Array<int> intArrayCopy = intArray;
    intArrayCopy[0] = 999;
    intArrayCopy.setValue(181,1);

     
    for (unsigned int i = 0; i < intArray.size(); i++)
    {
        std::cout << intArray[i] << " ";
    }
    std::cout << std::endl;

    
    std::cout << intArrayCopy << " ";
    std::cout << std::endl;
    
    std::cout << " *************** TEST 2 ******************" << std::endl;
 

    Array<std::string> stringArray(6);
    stringArray[0] = "foo";
    stringArray[1] = "bar";
    stringArray[2] = "baz";
    stringArray[3] = "fizz";
    stringArray[4] = "buzz";
    stringArray[5] = "fizzbuzz";
    

    
   
    std::cout << stringArray << " ";
    std::cout << std::endl;
    
    std::cout << " *************** TEST 3 exception ******************" << std::endl;
    int index =1000;

    try
    {
       
        int x = intArray[index];
         std::cout << x<< std::endl;
    }
    catch (const std::exception& e)
    {
        std::cout << "Caught exception ["<<index<<"] :" << e.what() << std::endl;
    }
    index =-1;
 try
    {
       
        int x = intArray[index];
         std::cout << x<< std::endl;
    }
    catch (const std::exception& e)
    {
        std::cout << "Caught exception ["<<index<<"] :" << e.what() << std::endl;
    }

    return 0;
}

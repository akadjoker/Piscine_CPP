/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 17:33:17 by lrosa-do          #+#    #+#             */
/*   Updated: 2023/02/21 18:34:59 by lrosa-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
        std::cout << " *************** TEST 1 ******************" << std::endl;
 
  // Create an array of integers of size 5
    Array<int> intArray(5);
    for (unsigned int i = 0; i < intArray.size(); i++)
    {
        intArray[i] = i * 2;
    }
    
    // Create a copy of the integer array
    Array<int> intArrayCopy = intArray;
    intArrayCopy[0] = 999;
    intArrayCopy.setValue(181,1);

     // Print the contents of the arrays
    for (unsigned int i = 0; i < intArray.size(); i++)
    {
        std::cout << intArray[i] << " ";
    }
    std::cout << std::endl;

    
    std::cout << intArrayCopy << " ";
    std::cout << std::endl;
    
    std::cout << " *************** TEST 2 ******************" << std::endl;
 
    // Create an array of strings of size 3
    Array<std::string> stringArray(3);
    stringArray[0] = "foo";
    stringArray[1] = "bar";
    stringArray[2] = "baz";
    

    
   
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

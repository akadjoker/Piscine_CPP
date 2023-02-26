/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 17:33:17 by lrosa-do          #+#    #+#             */
/*   Updated: 2023/02/26 11:36:40 by lrosa-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <string>
#include <fstream>
#include "Iter.hpp"

struct Dummy
{
    Dummy(int v): m_value(v)    {       }
    int getValue() const { return m_value;} 
private:
     int m_value;
};

std::ostream &operator<<( std::ostream &ost, const Dummy &data)
{
  ost << "Data [value=" << data.getValue()<< "]";
  return ost;
}


int main()
{
    {
         std::cout << "\nTEST WITH INT ARRAY\n" << std::endl;
         int nums[] = {1, 2, 3, 4, 5};
         unsigned int length = sizeof(nums) / sizeof(nums[0]);
         ::iter(nums, length, display<int>);
    }
    {
        std::cout << "\nTEST WITH CHAR ARRAY\n" << std::endl; 
        char nums[]  = {'a', 'b', 'c', 'd', 'e', 'f'};

         unsigned int length = sizeof(nums) / sizeof(nums[0]);
         ::iter(nums, length, display<char>);
    }
    
     {
         std::cout << "\nTEST WITH CLASS DUMMY ARRAY\n" << std::endl; 
         Dummy nums[6] = {Dummy(0), Dummy(5), Dummy(8), Dummy(2), Dummy(1), Dummy(4)};
         unsigned int length = sizeof(nums) / sizeof(nums[0]);
         ::iter(nums, length, display<Dummy>);
    }
    return 0;
}
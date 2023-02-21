/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 12:54:52 by lrosa-do          #+#    #+#             */
/*   Updated: 2023/02/21 15:58:37 by lrosa-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

/*


First thing, at the time the question was asked, uintptr_t was not in C++. It's in C99,
 in <stdint.h>, as an optional type. Many C++03 compilers do provide that file. It's also in C++11,
  in <cstdint>, where again it is optional, and which refers to C99 for the definition.

In C99, it is defined as "an unsigned integer type with the property that any 
valid pointer to void can be converted to this type, then converted back to pointer
 to void, and the result will compare equal to the original pointer".

Take this to mean what it says. It doesn't say anything about size.

uintptr_t might be the same size as a void*. It might be larger. It could conceivably 
be smaller, although such a C++ implementation approaches perverse. 
For example on some hypothetical platform where void* is 32 bits, but only 24 bits of virtual address 
space are used, you could have a 24-bit uintptr_t which satisfies the requirement. 

*/ 


uintptr_t serialize(Data *ptr)
{
    uintptr_t ui_ptr = reinterpret_cast<uintptr_t>(ptr);
	return (ui_ptr);
}

Data* deserialize(uintptr_t raw)
{
    Data *data = reinterpret_cast<Data *>(raw);
	return (data);
}

int main (void)
{

    std::cout <<"**************** HEAP TEST *************"<< std::endl;
    {
    Data data;
    uintptr_t raw;
    Data *other;

    std::cout<<"Print Original:" << data << std::endl;


    raw   = serialize(&data);
    other = deserialize(raw);

    std::cout<<"Print other :" << *other << std::endl;

    std::cout << "Objeto 1: " << data << "<>" << "Objeto 2: " << *other << std::endl;
    }
    std::cout <<"**************** STACK TEST *************"<< std::endl;

{
    Data* ptr = new Data("teste", 10, 0.5);

    uintptr_t raw = serialize(ptr);
    Data* ptr2 = deserialize(raw);

    // verifica se os ponteiros são iguais
    if (ptr == ptr2) 
    {
        std::cout << "OK" << std::endl;
    } else 
    {
        std::cout << "Erro" << std::endl;
    }

    std::cout<< "Ref :" << "Objeto 1: " << ptr << "<>" << "Objeto 2: " << ptr2 << std::endl;
    std::cout<< "Adress :" << "Objeto 1: " << &ptr << "<>" << "Objeto 2: " << &ptr2 << std::endl;
    std::cout<< "Values :" << "Objeto 1: " << *ptr << "<>" << "Objeto 2: " << *ptr2 << std::endl;
   
   
    delete ptr;
}
    return (0);
}
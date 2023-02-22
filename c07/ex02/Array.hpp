/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 17:33:17 by lrosa-do          #+#    #+#             */
/*   Updated: 2023/02/22 16:03:17 by lrosa-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MYARRAY_HPP
#define MYARRAY_HPP

#include <iostream>
#include <string>
#include <stdexcept>

template<typename T>
class Array
{
public:

    Array()
        : m_size(0), m_data(0)
    {
         std::cout << "Default Constructor called" << std::endl;
    }
    

    Array(unsigned int n)
        : m_size(n)
    {
        
        std::cout << "Constructor called" << std::endl;
        m_data = new T[n];
        for (unsigned int i = 0; i < n; i++)
        {
            m_data[i] = T();
        }
    }
    

    Array(const Array<T>& other)
        : m_size(other.m_size), m_data(new T[other.m_size])
    {
          std::cout << "Deep Copy Constructor called" << std::endl;
         for (unsigned int i = 0; i < m_size; i++)
        {
            m_data[i] = other.m_data[i];
        }
    }
        
    ~Array()
    {
       std::cout << "Destructor called" << std::endl;
        if(m_data)
            delete[] m_data;
    }

    Array<T>& operator=(const Array<T>& other)
    {
          std::cout << "Copy Assignment Operator called" << std::endl;
  
        if (this != &other)
        {
            delete[] m_data;
            m_size = other.m_size;
            m_data = new T[m_size];
            for (unsigned int i = 0; i < m_size; i++)
            {
                m_data[i] = other.m_data[i];
            }
        }
        return *this;
    }
    
    void	setValue(T value, unsigned int index)
     {
        if (index >= m_size)
            throw Array::IndexOutOfRangeException();
        m_data[index] = value;
    };
    T	getValue(unsigned int index) const
     {
        if (index >= m_size)
             throw Array::IndexOutOfRangeException();
        return m_data[index];
    };

    
    // Subscript operator: returns a reference to the element at the given index
    // unsigned int , prevent index == -1 
    T& operator[](unsigned int index)
    {
        if (index >= m_size)
        {
           	throw Array::IndexOutOfRangeException();
        }
        return m_data[index];
    }
    
     unsigned int size() const
    {
        return m_size;
    }
private:
   	class	IndexOutOfRangeException : public std::exception
	{
		public :
		virtual const char	*what(void) const throw()
		{
			return ("Index out of range");
		}
	};

private:
    unsigned int m_size;
    T* m_data;
};

template <typename T>
inline std::ostream &operator<<(std::ostream &o, Array<T> const &i)
{
	o << "Printing Array of size " << i.size() << " : " << std::endl;
	for (unsigned int x = 0; x < i.size(); x++)
		o << "[" << x << "] : " << i.getValue(x) << ", ";
	o << std::endl;
	return (o);
}

#endif
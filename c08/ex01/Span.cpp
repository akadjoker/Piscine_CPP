/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 14:57:57 by lrosa-do          #+#    #+#             */
/*   Updated: 2023/02/27 07:50:55 by lrosa-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span():m_capacity(0)
{}

Span::Span(unsigned int capacity):m_capacity(capacity)
{
	 m_numbers.reserve(m_capacity);	
}

Span::Span(const Span &s)
{
	m_numbers.clear();
	m_capacity = s.m_capacity;
	m_numbers.reserve(m_capacity);
	for (int i = 0; i < (int)m_capacity; ++i)
	{
		addNumber(s.m_numbers[i]);
	}
}


Span::~Span()
{
	m_numbers.clear();
}

Span& Span::operator=(const Span &s)
{
	if (this != &s)
	{
		m_numbers.clear();
		m_capacity = s.m_capacity;
		m_numbers.reserve(m_capacity);
		for (int i = 0; i < (int)m_capacity; ++i)
		{
			addNumber(s.m_numbers[i]);
		}
	}
	return (*this);	
}


int Span::getValue(unsigned int i)
{
	if (i >= m_capacity)
		throw OutOfRange();
	return m_numbers[i];
}
unsigned int Span::getCapacity(){return m_capacity;}
int Span::getSize(){return (int)m_numbers.size();}

int Span::operator[](unsigned int i)
{
	if (i >= m_capacity)
		throw OutOfRange();
	return m_numbers[i];
}

void Span::addNumber(int n)
{
	if (m_numbers.size() >= m_capacity)
	{
		throw Full();
	}
	m_numbers.push_back(n);
}
void Span::addRange(int first, int last)
 {
    if (last < first || last >= (int)m_capacity) 
		throw OutOfRange();
   
    for (int i = first; i <= last; ++i) 
	{
       addNumber(i);
    }
}

template<typename Iterator>
void Span::iaddNumbers(Iterator begin, Iterator end)
{
	 unsigned int range_size = std::distance(begin, end);
	if (m_numbers.size() + range_size > m_capacity)
	{
		throw Full();
	}
	m_numbers.insert(m_numbers.end(), begin, end);
}

void Span::addNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
    iaddNumbers(begin, end);
}

int Span::shortestSpan()
{
	if (getSize() < 2)
		throw TooSmall();
		
	std::vector<int> sortedNumbers = m_numbers;
	std::sort(sortedNumbers.begin(), sortedNumbers.end());
	int shortest = (sortedNumbers[1] - sortedNumbers[0]);
	for (unsigned int i = 2; i < sortedNumbers.size(); ++i) 
	{
		int span = sortedNumbers[i] - sortedNumbers[i-1];
		if (span < shortest) 
		{
			shortest = span;
		}
	}
	return shortest;
    
}

int Span::longestSpan()
{
	
	if (getSize() < 2)
		throw TooSmall();
	int min = *std::min_element(m_numbers.begin(), m_numbers.end());
	int max = *std::max_element(m_numbers.begin(), m_numbers.end());
	return (max - min);
}

const char* Span::Full::what() const throw() {return ("\e[0;38;5;9m addNumber failed \e[0m");}
const char* Span::TooSmall::what() const throw() {return ("\e[0;38;5;9m Cannot find shortest span with fewer than 2 numbers \e[0m");}
const char* Span::OutOfRange::what() const throw() {return ("\e[0;38;5;9m index out of range \e[0m");}


std::ostream &operator<<(std::ostream &o,  Span &i) 
{
    o << "Printing Span of size " << i.getSize() << " : " << std::endl;
	o << "(";
    for (int x = 0; x < i.getSize(); x++) 
	{
        o << "[" << x << "] : " << i[x];
        o << (x == i.getSize()-1 ? ")" : ", ");
    }
    o << std::endl;
    return o;
}
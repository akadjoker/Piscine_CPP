/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 14:57:49 by lrosa-do          #+#    #+#             */
/*   Updated: 2023/02/27 07:54:14 by lrosa-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#pragma once 

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cassert>
#include <cmath>


class Span
{
	public:
		Span();
		Span(unsigned int capacity);
		Span(const Span &s);
		Span& operator=(const Span &s);
		~Span();

		int  getValue(unsigned int i);
		unsigned int  getCapacity();
		int  getSize();
		int operator[](unsigned int i);

		void addNumber(int n);
		void addRange(int first, int last);
		
		void addNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end);

		/*
		The span between two integers is defined as the 
		absolute difference between them. 
		For example, the span between 3 and 8 is 5 (i.e., |3-8| = 5).
		*/
		int shortestSpan();
		int longestSpan();


	private:
		unsigned int m_capacity;
		std::vector<int> m_numbers;
	private:
	template<typename Iterator>
		void iaddNumbers(Iterator begin, Iterator end);
		
	protected:
			class Full : public std::exception {virtual const char* what() const throw();};
			class TooSmall : public std::exception {virtual const char* what() const throw();};
			class OutOfRange : public std::exception {virtual const char* what() const throw();};
		

};


std::ostream &operator<<(std::ostream &o,  Span &i);
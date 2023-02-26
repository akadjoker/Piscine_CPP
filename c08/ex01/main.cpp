/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 14:57:41 by lrosa-do          #+#    #+#             */
/*   Updated: 2023/02/26 14:03:00 by lrosa-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{

        std::cout << "************** TEST 1 ***********" << std::endl;
	{
	   Span span(10);

		try
		{
			span.addNumber(3);
			span.addNumber(6);
			span.addNumber(1);
			span.addNumber(8);
			span.addNumber(2);
			span.addNumber(9);
			span.addNumber(5);
			span.addNumber(7);
			span.addNumber(4);
			span.addNumber(10);

			std::cout << span << std::endl;
			std::cout << "Shortest span: " << span.shortestSpan() << std::endl;
			std::cout << "Longest  span: " << span.longestSpan() << std::endl;
		} catch (const std::exception& e) 
		{
			std::cout << "Exception caught: " << e.what() << std::endl;
		}
	}

	std::cout << "************** TEST 2 ***********" << std::endl;
	{
	   Span span(5);

		try
		{
			span.addNumber(3);
			span.addNumber(6);
			span.addNumber(1);
			span.addNumber(8);
			span.addNumber(2);
			span.addNumber(9);
			span.addNumber(5);
			span.addNumber(7);
			span.addNumber(4);
			span.addNumber(10);

			std::cout << span << std::endl;
		
		} catch (const std::exception& e) 
		{
			std::cout << "Exception caught: " << e.what() << std::endl;
		}
	}
	std::cout << "************** TEST 3 ***********" << std::endl;
	{
	   Span span(21);

		try
		{
			span.addNumber(3);
			span.addNumber(6);
			span.addNumber(1);
			span.addRange(4,20);

			std::cout << span << std::endl;
		
		} catch (const std::exception& e) 
		{
			std::cout << "Exception caught: " << e.what() << std::endl;
		}
	}
		std::cout << "************** TEST 4 ***********" << std::endl;
	{
	   Span span(11);

		try
		{

			span.addRange(0,10);

			std::cout << span << std::endl;

			int x = span.getValue(11);
			std::cout << x << std::endl;
		
		} catch (const std::exception& e) 
		{
			std::cout << "Exception caught: " << e.what() << std::endl;
		}
	}
	std::cout << "************** TEST 5 ***********" << std::endl;
	{
	   Span span(11);

		try
		{

			span.addRange(0,10);

			std::cout << span << std::endl;

			int x = span[12];
			std::cout << x << std::endl;
		
		} catch (const std::exception& e) 
		{
			std::cout << "Exception caught: " << e.what() << std::endl;
		}
	}

		std::cout << "************** BIGBIBIG TEST :O :O ***********" << std::endl;
	{
	   Span span(20001);

		try
		{

			span.addRange(0,20502);
			std::cout << "Shortest span: " << span.shortestSpan() << std::endl;
			std::cout << "Longest  span: " << span.longestSpan() << std::endl;
	

			//std::cout << span << std::endl;
		
		} catch (const std::exception& e) 
		{
			std::cout << "Exception caught: " << e.what() << std::endl;
		}
	}
	std::cout << "************** (range of iterators TEST 42 TEST) ***********" << std::endl;
	{
	   

		try
		{

			Span sp = Span(5);
			
			std::vector<int> nums;
			nums.push_back(6);
			nums.push_back(3);
			nums.push_back(17);
			nums.push_back(9);
			nums.push_back(11);
			
			sp.addNumbers(nums.begin(), nums.end());
			
			std::cout << sp << std::endl;
		
			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
	

			
		} catch (const std::exception& e) 
		{
			std::cout << "Exception caught: " << e.what() << std::endl;
		}
	}
	std::cout << "************** (42 TEST) ***********" << std::endl;
	{
	   

		try
		{

			Span sp = Span(5);
			sp.addNumber(6);
			sp.addNumber(3);
			sp.addNumber(17);
			sp.addNumber(9);
			sp.addNumber(11);

			
			std::cout << sp << std::endl;
		
			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
	

			
		} catch (const std::exception& e) 
		{
			std::cout << "Exception caught: " << e.what() << std::endl;
		}
	}
	std::cout << std::endl;
	return 0;
}
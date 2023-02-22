/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 14:57:49 by lrosa-do          #+#    #+#             */
/*   Updated: 2023/02/22 17:29:39 by lrosa-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stack>
#include <list>
#include "MutantStack.hpp"

int main()
{
	
		MutantStack<int> mstack;
		std::stack<int> stdstack;

		assert(stdstack.empty() == 1);
		assert(mstack.empty() == 1);
		std::cout << "***************************        Asserting std and mutant stack is empty       *****" << std::endl;
		mstack.push(24);
		mstack.push(42);
		mstack.push(142);
		
		stdstack.push(24);
		stdstack.push(42);
		stdstack.push(142);
		
		std::cout << "Mutant Stack size: " << mstack.size() << ", Std Stack size: " << stdstack.size() << std::endl;
		std::cout << "Mutant Stack top number: " << mstack.top() << ", Std Stack top number: " << stdstack.top() << std::endl;
		
		mstack.pop();
		mstack.pop();
	
		stdstack.pop();
		stdstack.pop();
	
		std::cout << "Mutant Stack size after two pop: " << mstack.size() << ", Std Stack size after two pop: " << stdstack.size() << std::endl;
		
		mstack.push(42);
		mstack.push(142);
		
		stdstack.push(42);
		stdstack.push(142);
		
		std::cout << "********************       Testing mutant stack iterator for displaying a copy  *******************" << std::endl;
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		std::cout << "The mutant stack: " << std::endl;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		MutantStack<int> mstack_bis(mstack);
		MutantStack<int>::iterator its = mstack_bis.begin();
		MutantStack<int>::iterator ites = mstack_bis.end();
		++its;
		--its;
		std::cout << "The mutant stack copy: " << std::endl;
		while (its != ites)
		{
			std::cout << *its << std::endl;
			++its;
		}
		std::cout << "*****   Testing mutant stack reverse iterator for displaying   ******" << std::endl;
		MutantStack<int>::riterator it_r = mstack.rbegin();
		MutantStack<int>::riterator ite_r = mstack.rend();
		std::cout << "***** The mutant stack (reverse):  ***** " << std::endl;
		while (it_r != ite_r)
		{
			std::cout << *it_r << std::endl;
			++it_r;
		}
	
	{
	std::cout << "***** TEST 42  MUTANT *****  " << std::endl;
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
		std::cout << *it << std::endl;
		++it;
		}
	}
		{
		std::cout << "***** TEST 42  LISt *****  " << std::endl;
		std::list<int> mstack;
		mstack.push_back(5);
		mstack.push_back(17);
		std::cout << 17 << std::endl;
		mstack.pop_back();
		std::cout << mstack.size() << std::endl;
		mstack.push_back(3);
		mstack.push_back(5);
		mstack.push_back(737);
		mstack.push_back(0);
		std::list<int>::iterator it = mstack.begin();
		std::list<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
		std::cout << *it << std::endl;
		++it;
		}
	}
	

	return 0;
}
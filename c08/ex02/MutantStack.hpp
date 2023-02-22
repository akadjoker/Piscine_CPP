/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 14:57:49 by lrosa-do          #+#    #+#             */
/*   Updated: 2023/02/22 17:14:51 by lrosa-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once 

#include <iostream>
#include <stack>
#include <deque>
#include <cassert>

/*
O std::stack é um container adaptador da STL que fornece uma interface para trabalhar com pilhas (stacks) em C++. 
Internamente, o std::stack é implementado em termos de outra estrutura de dados, geralmente um std::deque ou std::list. 
O std::stack fornece apenas um subconjunto de funcionalidades do seu 
contêiner subjacente e é projetado para ser mais fácil de usar para tarefas específicas de pilha, como push e pop
*/

template <typename T, typename Container=std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
	public:
		MutantStack() {};
		~MutantStack() {};
		MutantStack(MutantStack const *m) : std::stack<T, Container>(m){}
		MutantStack &operator=(MutantStack const &m) {std::stack<T, Container>::operator=(m); return *this;}
		typedef typename Container::iterator iterator;
		typedef typename Container::reverse_iterator riterator;
		iterator begin() {return this->c.begin();}
		iterator end() {return this->c.end();}
		riterator rbegin() {return this->c.rbegin();}
		riterator rend() {return this->c.rend();}

};

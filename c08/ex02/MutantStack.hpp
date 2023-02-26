/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 14:57:49 by lrosa-do          #+#    #+#             */
/*   Updated: 2023/02/26 18:02:25 by lrosa-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once 
# include <stack>
# include <iterator>

template < typename T >
class	MutantStack: public std::stack<T>
{

	

	public:
		~MutantStack();
		MutantStack( void );
		MutantStack( MutantStack const & ref );
		MutantStack & operator=( MutantStack const & rhs );

		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator riterator;

		iterator begin( void );
		iterator end( void );
		riterator rbegin( void );
		riterator rend( void );

};

template< typename T >
MutantStack<T>::~MutantStack()
{}

template< typename T >
MutantStack<T>::MutantStack( void )
{}

template< typename T >
MutantStack<T>::MutantStack( MutantStack<T> const & ref )
: std::stack<T>(ref)
{}

template < typename T >
MutantStack<T> & MutantStack<T>::operator=( MutantStack const & rhs )
{
	std::stack<T>::operator=(rhs);
	return (*this);
}

template < typename T >
typename MutantStack<T>::iterator MutantStack<T>::begin( void )
{
	return (std::stack<T>::c.begin());
}

template < typename T >
typename MutantStack<T>::iterator  MutantStack<T>::end( void )
{
	return (std::stack<T>::c.end());
}

template < typename T >
typename MutantStack<T>::riterator MutantStack<T>::rbegin( void )
{
	return (std::stack<T>::c.rbegin());
}

template < typename T >
typename MutantStack<T>::riterator MutantStack<T>::rend( void )
{
	return (std::stack<T>::c.rend());
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 11:36:30 by lrosa-do          #+#    #+#             */
/*   Updated: 2023/02/17 12:32:02 by lrosa-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(Brain const& brain) 
{
	std::cout << "Brain copy constructor called" << std::endl;
	*this = brain;
}

Brain::~Brain(void) 
{
	std::cout << "Brain destructor called" << std::endl;
}

Brain& Brain::operator=(Brain const& rhs)
 {
	std::cout << "Brain assignment operator called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = rhs.ideas[i];
	return *this;
}
std::string Brain::getIdea(int index) const
{
    return this->ideas[index];
}

void Brain::setIdea(int index, const std::string &idea)
{
    this->ideas[index] = idea;
}

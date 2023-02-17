/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 11:14:51 by lrosa-do          #+#    #+#             */
/*   Updated: 2023/02/17 12:47:54 by lrosa-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string>

class Brain
 {
public:
	Brain(void);
	Brain(Brain const& brain);
	~Brain(void);

	Brain& 		operator=(Brain const& rhs);
	std::string getIdea(int index) const;
	void    	setIdea(int index,const std::string &idea);

	std::string	ideas[100];
};

#endif

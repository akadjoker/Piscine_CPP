/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 12:01:17 by lrosa-do          #+#    #+#             */
/*   Updated: 2023/02/22 14:26:49 by lrosa-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
#include <cctype>
#include "Intern.hpp"


Intern::Intern()
{
    std::cout << "Default Constructor called for Intern" << std::endl;
}

Intern::Intern(const Intern &intern)
{
    std::cout << "Copy Construtor called for Intern" << std::endl;
    *this = intern;
}

Intern& Intern::operator=(const Intern &intern)
{
    std::cout << "Assignation operator called for Intern" << std::endl;
    (void)intern;
    return (*this);
}

Intern::~Intern()
{
    std::cout << "Destructor called for Intern" << std::endl;
}

AForm* Intern::makeForm(EFormType type, const std::string  &target)
{
    
    switch (type)
    {
        case ENone:
        {
             throw(InvalidException());
             return NULL;
        }break;
        case EPresidential:
        {
            return getPresidential(target);
        }break;
        case ERobot:
        {
            return getRobot(target);
        }break;
        case EShrubbery:
        {
            return getShrubbery(target);
        }break;
        default:
        {
            throw(InvalidException());
            return NULL;
        }break;
                 
    }
    throw(InvalidException());
    return NULL;
}

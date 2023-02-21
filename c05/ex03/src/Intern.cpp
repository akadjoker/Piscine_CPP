/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 12:01:17 by lrosa-do          #+#    #+#             */
/*   Updated: 2023/02/21 12:12:06 by lrosa-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
#include <cctype>
#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

Intern::Intern()
{
    std::cout << "Default Constructor called for Intern" << std::endl;
    funcs[0] = &Intern::createShru;
    funcs[1] = &Intern::createRob;
    funcs[2] = &Intern::createPres;
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

AForm* Intern::makeForm(const std::string  &form_name, const std::string  &target)
{
    AForm *f = NULL;
    (!form_name.compare("ShrubberyCreationForm") && (f = (this->*funcs[0])(target)));
    (!form_name.compare("RobotomyRequestForm") && (f = (this->*funcs[1])(target)));
    (!form_name.compare("PresidentialPardonForm") && (f = (this->*funcs[2])(target)));
    return f;
}

AForm* Intern::createShru(const std::string  &target)
{
    return new ShrubberyCreationForm(target);
}

AForm* Intern::createRob(const std::string &target)
{
    return new RobotomyRequestForm(target);
  
}

AForm* Intern::createPres(const std::string  &target)
{
 return  new PresidentialPardonForm(target);
}
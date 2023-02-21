/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 11:01:50 by lrosa-do          #+#    #+#             */
/*   Updated: 2023/02/21 16:44:11 by lrosa-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

/*
PresidentialPardonForm: Required grades: sign 25, exec 5
Informs that <target> has been pardoned by Zaphod Beeblebrox.
*/

PresidentialPardonForm::PresidentialPardonForm()
{
    std::cout << "Default Constructor called for PresidentialPardonForm" << std::endl;
    
    return ;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target)  : AForm("PresidentialPardonForm", 25, 5)
{
    std::cout << "Construtor  called for PresidentialPardonForm" << std::endl;
    m_target = target;
    return ;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &presidential) : AForm("PresidentialPardonForm", 145, 137)
{
    std::cout << "Copy Constructor called for PresidentialPardonForm" << std::endl;
    *this = presidential;
    return ;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &presidential)
{
    if (this != &presidential)
    {
        this->m_target = presidential.m_target;
    }
    return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "Destructor called for PresidentialPardonForm" << std::endl;
}

void PresidentialPardonForm::action() const
{
    std::cout << m_target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
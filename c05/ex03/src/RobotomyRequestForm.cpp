/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 11:02:58 by lrosa-do          #+#    #+#             */
/*   Updated: 2023/02/21 11:47:09 by lrosa-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/*
RobotomyRequestForm: Required grades: sign 72, exec 45
Makes some drilling noises. Then, informs that <target> has been robotomized
successfully 50% of the time. Otherwise, informs that the robotomy failed.
*/

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
{
    std::cout << "Default Constructor called for RobotomyRequestForm" << std::endl;
    
    return ;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target)  : AForm("RobotomyRequestForm", 72, 45)
{
    std::cout << "Construtor  called for RobotomyRequestForm" << std::endl;
    m_target = target;
    return ;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &robotomy) : AForm("RobotomyRequestForm", 145, 137)
{
    std::cout << "Copy Constructor called for RobotomyRequestForm" << std::endl;
    *this = robotomy;
    return ;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &robotomy)
{
    m_target = robotomy.m_target;
    return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "Destructor called for RobotomyRequestForm" << std::endl;
    return ;
}

void RobotomyRequestForm::action() const
{    
    srand(time(0));
    int x = rand();

    if (x % 2 == 0)
        std::cout << " ..010011.11.1102..... " << m_target << " has been robotomized sucessfully!" << std::endl;
    else
        std::cout << "Robotomy FAILED" << std::endl;
    
    return ;
}
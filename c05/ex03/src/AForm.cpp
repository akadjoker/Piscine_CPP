/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 10:22:27 by lrosa-do          #+#    #+#             */
/*   Updated: 2023/02/21 11:28:22 by lrosa-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"


AForm::AForm() : m_grade_to_sign(0), m_grade_to_execute(0)
{
    std::cout << "Default Constructor called for AForm" << std::endl;
    m_signed = false;
 
}

AForm::AForm(const std::string name, const int grade_to_sign, const int grade_to_execute) :
                m_name(name), m_grade_to_sign(grade_to_sign),m_grade_to_execute(grade_to_execute)
{
    if (grade_to_sign <= 0)
        throw(GradeTooHighException());
    if (grade_to_sign >= 151)
        throw(GradeTooLowException());
    if (m_grade_to_execute <= 0)
        throw(GradeTooHighException());
    if (grade_to_execute >= 151)
        throw(GradeTooLowException());
    std::cout << "Default Constructor with arg called for AForm" << std::endl;

    m_signed = false;
  
}

AForm::AForm(const AForm &form) : m_grade_to_sign(0), m_grade_to_execute(0)
{
    std::cout << "Copy Construtor called for AForm" << std::endl;
    *this = form;

}

AForm& AForm::operator=(const AForm &form)
{
    std::cout << "Assignation operator called for AForm" << std::endl;
    m_signed = form.m_signed;
    return (*this);
}

AForm::~AForm()
{
    std::cout << "Destructor called for AForm" << std::endl;
}

void AForm::action() const 
{
    
}

std::string AForm::getName() const
{
    return m_name;
}

int AForm::getGradeToSign() const
{
    return m_grade_to_sign;
}

int AForm::getGradeToExecute() const
{
    return m_grade_to_execute;
}

std::string AForm::getSigned() const
{
    if (m_signed == true)
        return ("Yes");
    else
        return ("No");
}

void AForm::beSigned(Bureaucrat &bur)
{
    if (bur.getGrade() <= m_grade_to_sign)
    {
        m_signed = true;
        bur.signForm(m_signed, m_name);
    }
    else
    {
        bur.signForm(m_signed, m_name);
        throw(GradeTooLowException());
    }
}

void AForm::execute(Bureaucrat const &executor) const
{
    if (executor.getGrade() <= this->getGradeToSign() && executor.getGrade() <= this->getGradeToExecute())
        this->action();
    else
        throw(GradeTooLowException());

}


std::ostream &operator<<( std::ostream & ost, AForm const &form)
{
	ost << form.getName() << ", grade to sign: " << form.getGradeToSign() << ", grade to execute: " << form.getGradeToExecute() << ", signed: " << form.getSigned() << std::endl;
	return ost;
}
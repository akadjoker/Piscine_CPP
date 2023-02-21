/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 10:31:26 by lrosa-do          #+#    #+#             */
/*   Updated: 2023/02/21 16:29:34 by lrosa-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Form.hpp"

Form::Form() : m_grade_to_sign(0), m_grade_to_execute(0)
{
    std::cout << "Default Constructor called for Form" << std::endl;
    m_signed = false;
    return ;
}

Form::Form(const std::string &name, const int grade_to_sign, const int grade_to_execute) :
                m_name(name), m_grade_to_sign(grade_to_sign), m_grade_to_execute(grade_to_execute)
{
    if (grade_to_sign <= 0)
        throw(GradeTooHighException());
    if (grade_to_sign >= 151)
        throw(GradeTooLowException());
    if (m_grade_to_execute <= 0)
        throw(GradeTooHighException());
    if (grade_to_execute >= 151)
        throw(GradeTooLowException());
    std::cout << "Constructor called for Form" << std::endl;

    m_signed = false;
    return ;
}

Form::Form(const Form &form) : m_grade_to_sign(0), m_grade_to_execute(0)
{
    std::cout << "Copy Constructor called for Form" << std::endl;
    *this = form;
    return ;
}

Form& Form::operator=(const Form &form)
{
    std::cout << "Assignation Operator called for Form" << std::endl;
    if (this != &form)
        m_signed = form.m_signed;
    return (*this);
}

Form::~Form()
{
    std::cout << "Destructor called for Form" << std::endl;
    return ;
}

std::string Form::getName() const
{
    return (m_name);
}

int Form::getGradeToSign() const
{
    return (m_grade_to_sign);
}

int Form::getGradeToExecute() const
{
    return (m_grade_to_execute);
}

std::string Form::getSigned() const
{
    if (m_signed == true)
        return ("Yes");
    else
        return ("No");
}

void Form::beSigned(Bureaucrat &bur)
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
    return ;
}

std::ostream &operator<<( std::ostream & ost, Form const &form)
{
	ost << form.getName() << ", grade to sign: " << form.getGradeToSign() << ", grade to execute: " << form.getGradeToExecute() << ", signed: " << form.getSigned() << std::endl;
	return ost;
}
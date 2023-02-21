/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 10:22:17 by lrosa-do          #+#    #+#             */
/*   Updated: 2023/02/21 16:41:15 by lrosa-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/*
Remember. Since grade 1 is the highest one and 150 the lowest,
incrementing a grade 3 should give a grade 2 to the bureaucrat.
bla bla bla f ****
*/

Bureaucrat::Bureaucrat()
{
    std::cout << "Default Constructor called for Bureaucrat" << std::endl;
    return ;
}

Bureaucrat::Bureaucrat(const std::string &name, int grade) : m_name(name)
{
    if (grade < 1)
    {
        throw(GradeTooHighException());
    }
    if (grade > 150)
    {
        throw(GradeTooLowException());
    }
    std::cout << "Constructor called for Bureaucrat" << std::endl;
    m_grade = grade;
    return ;

}

Bureaucrat::Bureaucrat(const Bureaucrat &bureaucrat)
{
    std::cout << "Copy Construtor called for Bureaucrat" << std::endl;
    *this = bureaucrat;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &b)
{
    std::cout << "Assignation operator called for Bureaucrat" << std::endl;
      if (this != &b)
    {
        this->m_name = b.getName();
        this->m_grade = b.getGrade();
    }
    return (*this);
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Default Destructor called for Bureaucrat" << std::endl;
    return ;
}

std::string Bureaucrat::getName() const
{
    return m_name;
}

int Bureaucrat::getGrade() const
{
    return m_grade;
}

void Bureaucrat::incGrade()
{
    if (m_grade == 1)
    {
        throw(GradeTooHighException());
    }
    else
        m_grade--;
}

void Bureaucrat::decGrade()
{
    if (m_grade == 150)
    {
        throw(GradeTooLowException());
    }
    else
       m_grade++;
}

std::ostream &operator<<( std::ostream & ost, Bureaucrat const &bur)
{
	ost << bur.getName() << ", bureaucrat grade: " << bur.getGrade();
	return ost;
}

void Bureaucrat::signForm(const bool sign, const std::string &form_name) const
{
    if (sign == true)
        std::cout << m_name << " signed " << form_name << std::endl;
    else
        std::cout << m_name << " couldn’t sign " << form_name << " because grade too low" << std::endl;

}

void Bureaucrat::executeForm(const AForm &form) const
{
    try
    {
        form.execute(*this);
    }
    catch (std::exception &error)
    {
        std::cout << error.what() << std::endl;
    }

}
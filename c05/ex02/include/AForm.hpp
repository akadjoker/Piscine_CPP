/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 10:22:27 by lrosa-do          #+#    #+#             */
/*   Updated: 2023/02/21 11:41:57 by lrosa-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"
# include <iostream>
# include <string>
# include <fstream>

class Bureaucrat;

class AForm 
{
    public:

        AForm();
        AForm(const std::string name, const int grade_to_sign, const int grade_to_execute);
        AForm(const AForm &form);
        AForm& operator=(const AForm &form);
        virtual ~AForm() = 0;
        std::string getName() const;
        int getGradeToSign() const;
        int getGradeToExecute() const;
        std::string getSigned() const;
        void beSigned(Bureaucrat &bur);
        void execute(Bureaucrat const &executor) const;
        virtual void action() const;

    private:

        const std::string m_name;
        bool m_signed;
        const int m_grade_to_sign;
        const int m_grade_to_execute;
};

std::ostream & operator <<(std::ostream &ost, AForm const &form);

#endif
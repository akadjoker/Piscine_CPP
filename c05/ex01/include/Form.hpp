/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 10:30:36 by lrosa-do          #+#    #+#             */
/*   Updated: 2023/02/21 10:31:04 by lrosa-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"
# include <iostream>
# include <string>

class Form 
{

   public:

        Form();
        Form(const std::string &name, const int grade_to_sign, const int grade_to_execute);
        Form(const Form &form);
        Form& operator=(const Form &form);
        ~Form();
        std::string getName() const;
        int getGradeToSign() const;
        int getGradeToExecute() const;
        std::string getSigned() const;
        void beSigned(Bureaucrat &bur);

    private:

        const std::string m_name;
        bool m_signed;
        const int m_grade_to_sign;
        const int m_grade_to_execute;

};

std::ostream & operator <<(std::ostream &ost, Form const &form);

#endif
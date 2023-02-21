/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 10:22:27 by lrosa-do          #+#    #+#             */
/*   Updated: 2023/02/21 16:53:09 by lrosa-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>



class Bureaucrat 
{
  
    public:
        Bureaucrat();
        Bureaucrat(const std::string &name, int grade);
        Bureaucrat(const Bureaucrat &bureaucrat);
        Bureaucrat& operator=(const Bureaucrat &bureaucrat);
        ~Bureaucrat();
        std::string getName() const;
        int getGrade() const;
        void incGrade();
        void decGrade();

    
    private:
        std::string m_name;
        int m_grade;
};


class GradeTooHighException : public std::exception 
{
    public:
            virtual const char* what() const throw() 
            {
                	return ("\e[0;38;5;9mForm Exception: Grade Too High\n\e[0m");
            }
};

class GradeTooLowException : public std::exception 
{
    public:
            virtual const char* what() const throw() 
            {
                			return ("\e[0;38;5;9mForm Exception: Grade Too Low\n\e[0m");
		
            }
};



std::ostream & operator <<(std::ostream &ost, Bureaucrat const &bur);

#endif
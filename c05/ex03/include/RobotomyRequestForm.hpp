/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 11:01:01 by lrosa-do          #+#    #+#             */
/*   Updated: 2023/02/21 16:55:28 by lrosa-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "AForm.hpp"
# include "Bureaucrat.hpp"
# include <iostream>
# include <cstdlib>


class RobotomyRequestForm : public AForm 
{
    public:
        RobotomyRequestForm();
        RobotomyRequestForm(const std::string &target);
        RobotomyRequestForm(const RobotomyRequestForm &robotomy);
        RobotomyRequestForm& operator=(const RobotomyRequestForm &robotomy);
        ~RobotomyRequestForm();
        void action() const;

    private:
        std::string m_target;
};




#endif
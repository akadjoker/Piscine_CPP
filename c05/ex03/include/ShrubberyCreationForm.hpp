/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 11:01:25 by lrosa-do          #+#    #+#             */
/*   Updated: 2023/02/21 16:55:35 by lrosa-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "AForm.hpp"
# include "Bureaucrat.hpp"
# include <iostream>

class ShrubberyCreationForm : public AForm 
{
    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(const std::string &target);
        ShrubberyCreationForm(const ShrubberyCreationForm &shrubberry);
        ShrubberyCreationForm& operator=(const ShrubberyCreationForm &shrubbery);
        ~ShrubberyCreationForm();
        void action() const;

    private:
        std::string m_target;
};




#endif
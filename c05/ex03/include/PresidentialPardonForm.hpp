/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 11:00:46 by lrosa-do          #+#    #+#             */
/*   Updated: 2023/02/21 16:55:21 by lrosa-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "AForm.hpp"
# include "Bureaucrat.hpp"
# include <iostream>
# include <cstdlib>


class PresidentialPardonForm : public AForm 
{
    public:
        PresidentialPardonForm();
        PresidentialPardonForm(const std::string &target);
        PresidentialPardonForm(const PresidentialPardonForm &presidential);
        PresidentialPardonForm& operator=(const PresidentialPardonForm &presidential);
        ~PresidentialPardonForm();
        void action() const;

    private:
        std::string m_target;
};




#endif
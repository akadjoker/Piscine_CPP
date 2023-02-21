/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 10:22:27 by lrosa-do          #+#    #+#             */
/*   Updated: 2023/02/21 12:15:06 by lrosa-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdexcept>
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


int main(void)
{
    Bureaucrat bur("Luis", 2);
    Intern intern;
    AForm *shru;
    AForm *rob;
    AForm *pres;
    std::cout << "\n------SHRU EXECUTION--------------" << std::endl;


    shru = intern.makeForm("ShrubberyCreationForm", "Luis");
    shru->action();
    
    std::cout << "\n--------ROB EXECUTION------------" << std::endl;

    rob = intern.makeForm("RobotomyRequestForm", "Rosa");
    rob->action();

    std::cout << "\n-------PRES EXECUTION-------------" << std::endl;

    pres = intern.makeForm("PresidentialPardonForm", "Luis");
    pres->action();

    std::cout << "--------------------" << std::endl;


    delete shru;
    delete rob;
    delete pres;
    
    return (0);

  
 
}
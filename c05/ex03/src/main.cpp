/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 10:22:27 by lrosa-do          #+#    #+#             */
/*   Updated: 2023/02/22 14:26:16 by lrosa-do         ###   ########.fr       */
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


     shru = intern.makeForm(EShrubbery, "Luis");
     shru->action();
     delete shru;
    
     std::cout << "\n--------ROB EXECUTION------------" << std::endl;

    rob = intern.makeForm(ERobot, "Rosa");
    rob->action();
    delete rob;
        

     std::cout << "\n-------PRES EXECUTION-------------" << std::endl;
     pres = intern.makeForm(EPresidential, "Luis");
     pres->action();
     delete pres;

    std::cout << "--------------------" << std::endl;

   std::cout << "\n-------TEST INVALID FORM-------------" << std::endl;
   
     AForm *invalid=NULL;
   
   try
   { 
     invalid = intern.makeForm(ENone, "Luis");
   }
   catch(const std::exception& e)
   {
        std::cout<< "Error: " << e.what() << std::endl;
   }
   
   if (invalid != NULL)
   {
      invalid->action();
      delete invalid;
   } 

    
    return (0);

  
 
}
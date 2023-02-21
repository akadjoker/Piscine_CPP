/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 10:22:27 by lrosa-do          #+#    #+#             */
/*   Updated: 2023/02/21 16:49:03 by lrosa-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdexcept>
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


int main(void)
{
    Bureaucrat bur("Luis", 2);
    Bureaucrat other_bur("Rosa", 150);
    Bureaucrat other_robot("Robot", 1);

    std::cout << bur << std::endl;
    
    std::cout << "--------------------" << std::endl;

    ShrubberyCreationForm shru("natal");

    shru.action();
    std::cout << shru;

    std::cout << std::endl<<"--------------------" << std::endl;


    RobotomyRequestForm rob("other");

    rob.action();
    std::cout << rob;

    std::cout << std::endl<< "--------------------" << std::endl;


    PresidentialPardonForm pre("other");

    pre.action();
    std::cout << pre;

    std::cout << std::endl<<"-----------EXECUTE SHRU---------" << std::endl;

    bur.executeForm(shru);
    other_bur.executeForm(shru);


    std::cout <<std::endl<< "------EXECUTE ROBOTOMY--------------" << std::endl;

    rob.beSigned(bur);
    bur.executeForm(rob);
    rob.getSigned();
    std::cout << rob;



    std::cout << std::endl<<"--------EXECUTE PRESIDENTIAL------------" << std::endl;

    bur.executeForm(pre);
    other_bur.executeForm(pre);

    std::cout << "--------------------" << std::endl;


    
    return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 10:33:16 by lrosa-do          #+#    #+#             */
/*   Updated: 2023/02/21 16:48:51 by lrosa-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdexcept>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
    Bureaucrat cLuis("Luis", 30);
    Form form("FORMA", 5, 10);
    Form other_form("OTHER_FORM", 35, 10);

    std::cout << "------SHOW FORM--------------" << std::endl;

    std::cout << form.getGradeToExecute() << std::endl;
    std::cout << form.getGradeToSign() << std::endl;
    std::cout << form.getName() << std::endl;

    std::cout << form << std::endl;

    std::cout << "--------------------" << std::endl;

    try
    {
        form.beSigned(cLuis);
    }
    catch (std::exception &error)
    {
        std::cout << error.what() << std::endl;
    }
    std::cout << form.getSigned() << std::endl;

    std::cout << "--------------------" << std::endl;

    try
    {
        other_form.beSigned(cLuis);
    }
    catch (std::exception &error)
    {
        std::cout << error.what() << std::endl;
    }
    std::cout << other_form.getSigned() << std::endl;

    std::cout << "-------TRY LOW-------------" << std::endl;

    try 
    {
        Form try_form("TRY", 1, 151);
    }
    catch (std::exception &error)
    {
        std::cout << error.what() << std::endl;
    }

    std::cout << "--------------------" << std::endl;

    try 
    {
        Form try_form("TRY", 1, 149);
    }
    catch (std::exception &error)
    {
        std::cout << error.what() << std::endl;
    }

    std::cout << "-------TRY HIGH-------------" << std::endl;

    try 
    {
        Form try_form("TRY", -1, 149);
    }
    catch (std::exception &error)
    {
        std::cout << error.what() << std::endl;
    }

    std::cout << "--------------------" << std::endl;
    
    return (0);
}
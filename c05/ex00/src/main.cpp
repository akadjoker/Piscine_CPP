/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 10:25:10 by lrosa-do          #+#    #+#             */
/*   Updated: 2023/02/21 10:27:09 by lrosa-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <iostream>
#include <stdexcept>
#include "Bureaucrat.hpp"

int main(void)
{
    Bureaucrat bur("Luis", 150);
    std::cout << bur.getName() << std::endl;
    std::cout << bur.getGrade() << std::endl;

    std::cout << "--------------------" << std::endl;

    Bureaucrat other("Lucas", 1);
    std::cout << other.getName() << std::endl;
    std::cout << other.getGrade() << std::endl;

    std::cout << "-----TO LOW------(150)---------" << std::endl;

    try 
    {
        Bureaucrat other_bur("Nico", 151);
    }
    catch (std::exception &error)
    {
        std::cout << error.what() << std::endl;
    }

    std::cout << "------TO HIGH-----(0)---------" << std::endl;

    try 
    {
        Bureaucrat other_bur("Rute", 0);
    }
    catch (std::exception &error)
    {
        std::cout << error.what() << std::endl;
    }

    std::cout << "----------OK----------" << std::endl;

    try 
    {
        Bureaucrat other_bur("Daniela", 5);
        std::cout << other_bur.getName() << std::endl;
        std::cout << other_bur.getGrade() << std::endl;
    }
    catch (std::exception &error)
    {
        std::cout << error.what() << std::endl;
    }

    std::cout << "------DECREMENT--------------" << std::endl;

    try 
    {
        bur.decGrade();
    }
    catch (std::exception &error)
    {
        std::cout << error.what() << std::endl;
    }
    std::cout << bur.getGrade() << std::endl;

    std::cout << "-------INCREMENT-------------" << std::endl;

    try 
    {
        bur.incGrade();
    }
    catch (std::exception &error)
    {
        std::cout << error.what() << std::endl;
    }
    std::cout << bur.getGrade() << std::endl;

    std::cout << "--------INCREMENET------------" << std::endl;

    try 
    {
        other.incGrade();
    }
    catch (std::exception &error)
    {
        std::cout << error.what() << std::endl;
    }
    std::cout << other.getGrade() << std::endl;

    std::cout << "-------DECREMENT-------------" << std::endl;

    try 
    {
        other.decGrade();
    }
    catch (std::exception &error)
    {
        std::cout << error.what() << std::endl;
    }
    std::cout << other.getGrade() << std::endl;

    std::cout << "--------------------" << std::endl;

    std::cout << bur << std::endl;
    
    std::cout << "--------------------" << std::endl;
    
    return (0);
}
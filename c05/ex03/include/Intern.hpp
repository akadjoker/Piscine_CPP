/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 12:00:54 by lrosa-do          #+#    #+#             */
/*   Updated: 2023/02/22 14:27:10 by lrosa-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP
#include <string>
#include <iostream>
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

enum EFormType {ENone, EPresidential, ERobot, EShrubbery};


struct ICommand
{
    ICommand(){}
    virtual AForm* create(const std::string &target) = 0; 
protected:
    EFormType m_type;
};

struct PredisentialComand : public ICommand
{
    PredisentialComand()
    {
        m_type = EPresidential;
    }
    
     AForm* create(const std::string &target) 
    {
        return new  PresidentialPardonForm(target);
    }
};

struct RobotComand : public ICommand
{
    RobotComand()
    {
        m_type = ERobot;
    }
    
     AForm* create(const std::string &target) 
    {
        return new  RobotomyRequestForm(target);
    }
};


struct ShrubberyComand : public ICommand
{
    ShrubberyComand()
    {
        m_type = EShrubbery;
    }
    
     AForm* create(const std::string &target) 
    {
        return new  ShrubberyCreationForm(target);
    }
};

class InvalidException : public std::exception 
{
    public:
            virtual const char* what() const throw() 
            {
                	return ("\e[0;38;5;9mForm  Invalid Form \n\e[0m");
            }
};



class Intern 
{

    public:

        Intern();
        Intern(const Intern &Intern);
        Intern& operator=(const Intern &intern);
        ~Intern();

        AForm* makeForm(EFormType type, const  std::string  &target);
    private:
        PredisentialComand m_presidentialCommand;
        RobotComand        m_robotComand;
        ShrubberyComand    m_shrubberyComand;
	private:
         AForm *getPresidential( const  std::string  &target) 
         {
               return m_presidentialCommand.create(target);
         }
           AForm *getShrubbery( const  std::string  &target) 
         {
               return m_shrubberyComand.create(target);
         }
           AForm *getRobot( const  std::string  &target) 
         {
               return m_robotComand.create(target);
         }

};

#endif

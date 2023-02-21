/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 11:03:44 by lrosa-do          #+#    #+#             */
/*   Updated: 2023/02/21 11:50:27 by lrosa-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ShrubberyCreationForm.hpp"

/*

ShrubberyCreationForm: Required grades: sign 145, exec 137
Create a file <target>_shrubbery in the working directory, and writes ASCII trees
inside it.
*/

ShrubberyCreationForm::ShrubberyCreationForm()
{
    std::cout << "Default Constructor called for ShrubberyCreationForm" << std::endl;
    
    return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target)  : AForm("ShrubberyCreationForm", 145, 137)
{
    std::cout << "Construtor  called for ShrubberyCreationForm" << std::endl;
    m_target = target;
    return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &shrubbery) : AForm("ShrubberyCreationForm", 145, 137)
{
    std::cout << "Copy Constructor called for ShrubberyCreationForm" << std::endl;
    *this = shrubbery;
    return ;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &shrubbery)
{
   m_target = shrubbery.m_target;
    return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "Destructor called for ShrubberyCreationForm" << std::endl;
    return ;
}

void ShrubberyCreationForm::action() const
{

    std::fstream file;
    std::string file_name;
    file_name = m_target + "_shrubbery";

    file.open(file_name.c_str(), std::ios::out | std::ios::in | std::ios::trunc);
    if (!file)
    {
        std::cout << "\e[0;38;5;9mERROR CREATING FILE\n\e[0m" << std::endl;
        return;
    }
    file << "    *    " << std::endl;
    file << "   /.\\   " << std::endl;
    file << "  /o..\\  " << std::endl;
    file << "  /..o\\  " << std::endl;
    file << " /.o..o\\ " << std::endl;
    file << " /...o.\\ " << std::endl;
    file << "/..o....\\" << std::endl;
    file << "^^^[_]^^^" << std::endl;

    file.close();
}


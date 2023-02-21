/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 12:00:54 by lrosa-do          #+#    #+#             */
/*   Updated: 2023/02/21 12:09:04 by lrosa-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP
#include <string>
#include <iostream>
#include "AForm.hpp"

class Intern 
{

    public:

        Intern();
        Intern(const Intern &Intern);
        Intern& operator=(const Intern &intern);
        ~Intern();

        AForm* makeForm(const std::string  &form_name, const  std::string  &target);
   
        AForm* createShru(const std::string  &target);
        AForm* createRob(const std::string  &target);
        AForm* createPres(const std::string  &target);
	private:
	     typedef AForm* (Intern::*func)(const std::string  &target);
         func funcs[3];

};

#endif

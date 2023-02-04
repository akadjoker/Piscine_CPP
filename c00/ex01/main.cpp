/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 18:09:44 by lrosa-do          #+#    #+#             */
/*   Updated: 2023/02/04 08:39:22 by lrosa-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <iomanip> //setw 
# include <string>
# include <limits>
# include <cstring>
# include "Colors.hpp"
# include "Contact.hpp"
# include "PhoneBook.hpp" //UpperCamelCase


void do_error(std::string msg)
{
	std::cout << RED << std::endl;
	std::cout << msg << std::endl;
	std::cout << RESET << std::endl;	
}

std::string truncate(std::string str)
{
	if (str.size() >= 10)
		return (str.substr(0, 9) + ".");
	return (str);
}


int checkint(std::string input)
{
	unsigned long	i;

	for (i = 0; i < input.length(); i++)
	{
		if (!isdigit(input[i]))
			return (-1);
	}
	return (atoi(input.c_str()));
}

int main() {
    PhoneBook phonebook;
    std::string command;
    while (true)
    {
   
        std::cout << MAGENTA << std::endl;
        std::cout << "Enter a command (ADD, SEARCH, EXIT): ";
        std::cout << YELLOW << std::endl;
        std::getline(std::cin, command);
        std::cout << RESET << std::endl;
    
        if (command == "ADD") 
        {
            Contact contact;
            std::string	input;

            std::cout << "Enter first name: ";
            std::getline(std::cin, input);
            contact.set_firstname(input);
            
            std::cout << "Enter last name: ";
            std::getline(std::cin, input);
            contact.set_lastname(input);
            
            std::cout << "Enter nickname: ";
            std::getline(std::cin, input);
            contact.set_nickname(input);
           
            std::cout << "Enter phone number: ";
            std::getline(std::cin, input);
            contact.set_phonenumber(input);
         
            std::cout << "Enter darkest secret: ";
            std::getline(std::cin, input);
            contact.set_darkestsecret(input);
            if (contact.is_empty())
                do_error("No non-empty contact in the phonebook. Use ADD to add a valid contact .");
            else            
                phonebook.add_contact(contact);
                
        } else if (command == "SEARCH") 
        {
            
            if (phonebook.get_count() == 0)
      			do_error("Your contact list is empty, you must add contacts first" );
			else
			{
                system("clear");
                phonebook.display_contacts();

                std::string	input;
                int index = -1;
                while (index <= 0 || index > std::min(phonebook.get_count(), MAX_CONTACTS))
                {
                    system("clear");
                    phonebook.display_contacts();

                    std::cout << YELLOW << std::endl;
                    std::cout << "What is the contact's index ?" << std::endl;
                    std::cout << RESET << std::endl;
                    std::getline(std::cin, input);
                    index = checkint(input);
                }
                if (index == -1)
                        do_error("Sorry this index is not valid");
                else if (index <= 0 || index > phonebook.get_count())
                        do_error( "Sorry this index is out of range");
                    
                if (index != -1)
                        phonebook.display_contact(index - 1);
			}
        } else if (command == "EXIT") 
        {
            break;
        } else 
        {
            system("clear");
            do_error( "Invalid command. Please try again.");
        }
    }
    return 0;
}


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 18:09:44 by lrosa-do          #+#    #+#             */
/*   Updated: 2023/02/04 08:38:46 by lrosa-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once
# include <iostream>
# include <string>
# include <cstring>
# include <iomanip> //setw 
# include "Colors.hpp"
# include "Contact.hpp"

const int MAX_CONTACTS = 8;
const int MAX_FIELD_LENGTH = 10;

std::string truncate(std::string str);


class PhoneBook 
{
  private:
    Contact contacts[MAX_CONTACTS + 1];
    int count;
  public:
    PhoneBook() : count(0) {}

    int get_count()
    {
        return count;
    }

    void add_contact(Contact contact) 
    {
        if (count >= MAX_CONTACTS)
        {
            count = MAX_CONTACTS;
            contacts[count-1] = contact;
            return;
        }
        contacts[count] = contact;
        count++;
    }

    Contact get_contact(int index) 
    {
      if (index >= 0 && index < MAX_CONTACTS) 
      {
        return contacts[index];
      }
      return Contact();
    }

    void display_contacts() 
    {
        int	i;

        count = std::min(count, MAX_CONTACTS);
        i = 0;
        std::cout << GREEN << std::endl;
        std::cout << "┌──────────┬──────────┬──────────┬──────────┐" << std::endl;
        std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
        std::cout << "├──────────┼──────────┼──────────┼──────────┤" << std::endl;
        while (i < count)
        {
          std::cout << "|" << std::setw(10) << i + 1;
		      std::cout << "|" << std::setw(10) << truncate(contacts[i].get_firstname());
		      std::cout << "|" << std::setw(10) << truncate(contacts[i].get_lastname());
		      std::cout << "|" << std::setw(10) << truncate(contacts[i].get_nickname()) << "|" << std::endl;
          i++;
	    }
      std::cout << "└──────────┴──────────┴──────────┴──────────┘" << std::endl;
	    std::cout << RESET << std::endl;
    }
    
    void display_contact(int index) 
    {
        std::cout << V_GREEN << std::endl;
       
      Contact c = contacts[index];
      std::cout << "First name     - " << c.get_firstname() << std::endl;
      std::cout << "Last name      - " << c.get_lastname() << std::endl;
      std::cout << "Nickname       - " << c.get_nickname() << std::endl;
      std::cout << "Phone number   - " << c.get_phonenumber() << std::endl;
      std::cout << "Darkest secret - " << c.get_darkestsecret() << std::endl;
      std::cout << RESET << std::endl;
    }
};

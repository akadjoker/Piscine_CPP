/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 08:51:57 by lrosa-do          #+#    #+#             */
/*   Updated: 2023/02/05 09:30:00 by lrosa-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libFT.hpp"
#include "Colors.hpp"



int main(int argc, char **argv)
{
    std::string 	s1;
    std::string 	s2;
    std::fstream 	file;
    std::fstream 	new_file;
    std::string 	name_file;
	int 			count;

    if (argc != 4)
    {
		std::cout << RED << std::endl;
        std::cout << "Error: Usage: ./replace <filename> <string 1> <string 2>" << std::endl;
		std::cout << RESET << std::endl;
        return (1);
    }
    s1 = argv[2];
    s2 = argv[3];
    file.open(argv[1], std::ios::in);
    if (!file)
    {
        std::cout <<RED << "Error: Opening File :"<< GREEN << argv[1] << RESET << std::endl;
        return (1);
    }
	if (FT::is_empty(file))
	{
		std::cout <<RED << "Error: File ("<< GREEN << argv[1]<<RED<< ") is empty" << RESET << std::endl;
		file.close();
        return (1);
	}
	name_file = argv[1];
    name_file.append(".replace");
   
    new_file.open(name_file.c_str(), std::ios::out | std::ios::in | std::ios::trunc);
    if (!new_file)
    {
        std::cout <<RED << "Error: Creating File :"<< GREEN << name_file << RESET << std::endl;
        return (1);
    }
    count = FT::replace(file, new_file, s1, s2);
    new_file.close();
    file.close();
	if (count == 0)
		std::cout <<YELLOW << "Don't find any (" << s1 <<") key ." << RESET << std::endl;		
	 else
		std::cout <<GREEN << "Replace " << count <<" Times ." << RESET << std::endl;
    return (0);
}


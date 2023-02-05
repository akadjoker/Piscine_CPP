/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 08:38:38 by lrosa-do          #+#    #+#             */
/*   Updated: 2023/02/05 08:38:41 by lrosa-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
	std::string string("HI THIS IS BRAIN");
	std::string* stringPTR = &string;
	std::string& stringREF = string;

	std::cout << "Address of string: " << &string << std::endl;
	std::cout << "Address of string using stringPTR: " << stringPTR << std::endl;
	std::cout << "Address of string using stringREF: " << &stringREF << std::endl;
	std::cout << "String value          : '" << string << "'" << std::endl;
	std::cout << "String using stringPTR: '" << *stringPTR << "'" << std::endl;
	std::cout << "String using stringREF: '" << stringREF << "'" << std::endl;
}
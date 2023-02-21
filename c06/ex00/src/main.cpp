
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 12:54:52 by lrosa-do          #+#    #+#             */
/*   Updated: 2023/02/21 14:52:30 by lrosa-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Dude!!, Please enter only one argument (litteral or char) to convert !" << std::endl;
		return 0;
	}
	if (argv[1] == NULL)
	{
		std::cout << "Dude!!, Input needed" << std::endl;
		return 0;
	}
	Conversion convert(argv[1]);
	convert.print();
}
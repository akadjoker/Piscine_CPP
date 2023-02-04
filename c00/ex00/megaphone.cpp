/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 18:22:02 by lrosa-do          #+#    #+#             */
/*   Updated: 2023/02/01 18:31:49 by lrosa-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>

void ft_error(void)
{
	std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << "\n";	
}

void ft_upper(char *word)
{
	for (int i = 0; word[i] != '\0'; i++)
		word[i] = toupper(word[i]);
	std::cout << word << " ";
}

void ft_upper_sound(int argc, char **argv)
{
	for (int i = 1; i < argc; i++)
		ft_upper(argv[i]);
	std::cout << std::endl;
}

int main(int ac, char *av[])
{
	if (ac == 1)
		ft_error();
	else
		ft_upper_sound(ac, av);
	return 0;
}

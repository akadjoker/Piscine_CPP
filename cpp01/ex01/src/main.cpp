/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 18:06:52 by lrosa-do          #+#    #+#             */
/*   Updated: 2023/02/04 10:00:32 by lrosa-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	int const count = 42;
	Zombie *horde = zombieHorde(count, "zombie");

	horde->announce();
	for (int i = 0; i < count; i++)
		horde[i].announce();
	delete [] horde;
}
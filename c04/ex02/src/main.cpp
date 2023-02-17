/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 11:40:19 by lrosa-do          #+#    #+#             */
/*   Updated: 2023/02/17 12:48:43 by lrosa-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

#define MAX_ANIMALS 2

int	main(void) 
{
	AAnimal	*animals[MAX_ANIMALS];
	Cat		cat;
	Cat		clone = cat;

	for (int i = 0; i < MAX_ANIMALS; i++)
		i % 2 ? animals[i] = new Cat() : animals[i] = new Dog();
	animals[0]->makeSound();
	animals[1]->makeSound();
	for (int i = 0; i < MAX_ANIMALS; i++)
		delete animals[i];

	
	/*
		AAnimal teste = new AAnimal();
		
	*/
	
}

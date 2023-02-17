/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 11:17:50 by lrosa-do          #+#    #+#             */
/*   Updated: 2023/02/17 12:37:35 by lrosa-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"


#define MAX_ANIMALS 25
int	main(void)
 {

	//test constructors && array

	 std::cout<< " *** teste 1 ***"  << std::endl;
  
	const Animal* d = new Dog();
	const Animal* c = new Cat();
	delete d;
	delete c;

	Animal* animals[MAX_ANIMALS];
	for (int i = 0; i < MAX_ANIMALS; i++)
		i % 2 ? animals[i] = new Cat : animals[i] = new Dog;

	for (int i = 0; i < MAX_ANIMALS; i++)
		delete animals[i];

	//test copy
 std::cout<< " *** teste 2 ***"  << std::endl;
  
	Dog dog;
    dog.setIdea(0, "quero ossos !");
    std::cout<< "Type: " << dog.getType() << std::endl << "Idea: " << dog.getIdea(0) << std::endl ;
    
    Dog dog2(dog);
    std::cout << "Copy Type: " << dog2.getType() << std::endl << "Copy Idea: " << dog2.getIdea(0) << std::endl ;
    
	Cat cat;
    cat.setIdea(0, "quero leite !");
    std::cout << "Type: " << cat.getType() << std::endl << "Idea: " << cat.getIdea(0) << std::endl ;
    
    Cat cat2(cat);
    std::cout << "Copy Type: " << cat2.getType() << std::endl << "Copy Idea: " << cat2.getIdea(0) << std::endl;
	
	 std::cout<< " *** end ***"  << std::endl;
  

}

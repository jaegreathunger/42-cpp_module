/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <jaeshin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 15:44:35 by jaeshin           #+#    #+#             */
/*   Updated: 2023/10/18 16:59:10 by jaeshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int	main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " - Dog" << std::endl;
	std::cout << i->getType() << " - Cat" << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound(); //will output the dog sound!
	meta->makeSound();
	delete meta;
	delete j;
	delete i;

	const WrongAnimal *wrongMeta = new WrongAnimal();
	const WrongAnimal *wrongCat = new WrongCat();
	std::cout << wrongMeta->getType() << " - Wrong Animal" << std::endl;
	std::cout << wrongCat->getType() << " - Wrong Cat" << std::endl;
	wrongMeta->makeSound();
	wrongCat->makeSound();
	delete wrongMeta;
	delete wrongCat;
	
	return 0;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <jaeshin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 15:44:35 by jaeshin           #+#    #+#             */
/*   Updated: 2023/10/18 22:11:47 by jaeshin          ###   ########.fr       */
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
	std::cout << std::endl;

	std::cout << j->getType() << " - Dog" << std::endl;
	std::cout << i->getType() << " - Cat" << std::endl;
	std::cout << std::endl;

	i->makeSound(); //will output the cat sound!
	j->makeSound(); //will output the dog sound!
	meta->makeSound();
	std::cout << std::endl;

	delete meta;
	delete j;
	delete i;
	std::cout << std::endl;

	const WrongAnimal *wrongMeta = new WrongAnimal();
	const WrongAnimal *wrongCat = new WrongCat();
	std::cout << std::endl;

	std::cout << wrongMeta->getType() << " - Wrong Animal" << std::endl;
	std::cout << wrongCat->getType() << " - Wrong Cat" << std::endl;
	std::cout << std::endl;

	wrongMeta->makeSound();
	wrongCat->makeSound();
	std::cout << std::endl;

	delete wrongMeta;
	delete wrongCat;

	return 0;
}

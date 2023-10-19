/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <jaeshin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 15:44:35 by jaeshin           #+#    #+#             */
/*   Updated: 2023/10/19 15:21:47 by jaeshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int	main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << std::endl;

	delete j; //should not create a leak
	delete i;

	std::cout << std::endl;
	const Animal *animals[4] = {new Dog(), new Dog(), new Cat(), new Cat()};
	std::cout << std::endl;
	for (int i = 0; i < 4; i++)
	{
		delete animals[i];
		std::cout << std::endl;
	}
	return 0;
}

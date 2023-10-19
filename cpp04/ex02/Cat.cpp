/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <jaeshin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 15:32:23 by jaeshin           #+#    #+#             */
/*   Updated: 2023/10/19 15:28:36 by jaeshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

//Cat::Cat() {};

Cat::Cat() : AAnimal("Cat")
{
	std::cout << "Cat has been created." << std::endl;
	this->brain = new Brain();
}

Cat::~Cat()
{
	delete this->brain;
	std::cout << "Cat has been destroyed." << std::endl;
}

Cat::Cat(const Cat &other)
{
	*this = other;
}

Cat &Cat::operator=(const Cat &other)
{
	this->type = other.type;
	return *this;
}

std::string	Cat::getType() const
{
	return this->type;
}

void	Cat::setType(std::string newType)
{
	this->type = newType;
}

void	Cat::makeSound() const
{
	std::cout << "I am a cat, MEOW MEOW." << std::endl;
}

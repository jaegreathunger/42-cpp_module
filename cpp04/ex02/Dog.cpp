/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <jaeshin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 15:42:44 by jaeshin           #+#    #+#             */
/*   Updated: 2023/10/19 15:28:43 by jaeshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

//Dog::Dog() {};

Dog::Dog() : AAnimal("Dog")
{
	std::cout << "Dog has been created." << std::endl;
	this->brain = new Brain();
}

Dog::~Dog()
{
	delete this->brain;
	std::cout << "Dog has been destroyed." << std::endl;
}

Dog::Dog(const Dog &other)
{
	*this = other;
}

Dog &Dog::operator=(const Dog &other)
{
	this->type = other.type;
	return *this;
}

std::string	Dog::getType() const
{
	return this->type;
}

void	Dog::setType(std::string newType)
{
	this->type = newType;
}

void	Dog::makeSound() const
{
	std::cout << "I am a Dog, WHOOF WHOOF." << std::endl;
}

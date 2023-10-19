/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <jaeshin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 15:22:21 by jaeshin           #+#    #+#             */
/*   Updated: 2023/10/18 21:39:27 by jaeshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Animal")
{
	std::cout << "Animal has been created." << std::endl;
}

Animal::Animal(std::string type)
{
	this->type = type;
	std::cout << "Animal has been created." << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal has been destroyed." << std::endl;
}

Animal::Animal(const Animal &other)
{
	*this = other;
	std::cout << "Animal has been copied from " << other.type << "." << std::endl;
}

Animal &Animal::operator=(const Animal &other)
{
	this->type = other.type;
	return *this;
}

std::string Animal::getType() const
{
	return this->type;
}

void	Animal::setType(const std::string newType)
{
	this->type = newType;
}

void	Animal::makeSound() const
{
	std::cout << "makeSound from Animal class." << std::endl;
}

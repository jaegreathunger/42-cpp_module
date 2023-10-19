/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <jaeshin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 16:53:11 by jaeshin           #+#    #+#             */
/*   Updated: 2023/10/18 21:40:24 by jaeshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal")
{
	std::cout << "WrongAnimal has been created." << std::endl;
}

WrongAnimal::WrongAnimal(std::string type)
{
	this->type = type;
	std::cout << "WrongAnimal has been created." << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal has been destroyed." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
	*this = other;
	std::cout << "WrongAnimal has been copied from " << other.type << "." << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
	this->type = other.type;
	return *this;
}

std::string WrongAnimal::getType() const
{
	return this->type;
}

void	WrongAnimal::setType(const std::string newType)
{
	this->type = newType;
}

void	WrongAnimal::makeSound() const
{
	std::cout << "makeSound from WrongAnimal class." << std::endl;
}

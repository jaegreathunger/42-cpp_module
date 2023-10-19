/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <jaeshin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 15:26:43 by jaeshin           #+#    #+#             */
/*   Updated: 2023/10/19 15:30:30 by jaeshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() : type("AAnimal")
{
	std::cout << "AAnimal has been created." << std::endl;
}

AAnimal::AAnimal(std::string type)
{
	this->type = type;
	std::cout << "AAnimal has been created." << std::endl;
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal has been destroyed." << std::endl;
}

AAnimal::AAnimal(const AAnimal &other)
{
	*this = other;
	std::cout << "AAnimal has been copied from " << other.type << "." << std::endl;
}

AAnimal &AAnimal::operator=(const AAnimal &other)
{
	this->type = other.type;
	return *this;
}

std::string AAnimal::getType() const
{
	return this->type;
}

void	AAnimal::setType(const std::string newType)
{
	this->type = newType;
}

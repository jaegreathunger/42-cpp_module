/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <jaeshin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 14:43:45 by jaeshin           #+#    #+#             */
/*   Updated: 2023/10/16 15:12:37 by jaeshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

//FragTrap::FragTrap() {}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->hitPoint = 100;
	this->energyPoint = 100;
	this->attackDamage = 30;
	std::cout << "FragTrap " << this->name << " has been created." << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << this->name << " has been destroyed." << std::endl;
}

FragTrap::FragTrap(const FragTrap &other)
{
	*this = other;
	std::cout << "FragTrap " << this->name << " has been copied with copy constuctor." << std::endl;
}

FragTrap	&FragTrap::operator=(const FragTrap &other)
{
	this->name = other.name;
	this->hitPoint = other.hitPoint;
	this->energyPoint = other.energyPoint;
	this->attackDamage = other.attackDamage;
	return *this;
}

void 	FragTrap::highFivesGuys(void)
{
	if (this->energyPoint)
	{
		this->energyPoint--;
		std::cout << "FragTrap " << this->name << " high fives!!" << std::endl;
	}
	else
		std::cout << "FragTrap " << this->name << " is out of energy." << std::endl;
}

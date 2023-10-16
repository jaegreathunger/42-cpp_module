/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <jaeshin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 22:41:36 by jaeshin           #+#    #+#             */
/*   Updated: 2023/10/16 14:03:57 by jaeshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->hitPoint = 100;
    this->energyPoint = 50;
    this->attackDamage = 20;
	std::cout << "Scavtrap " << this->name << " has been created." << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Scavtrap " << this->name << " has been destroyed." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other)
{
	*this = other;
	std::cout << "ScavTrap " << this->name << " has been copied with copy constuctor." << std::endl;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &other)
{
	this->name = other.name;
	this->hitPoint = other.hitPoint;
	this->energyPoint = other.energyPoint;
	this->attackDamage = other.attackDamage;
	return *this;
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->energyPoint)
	{
		this->energyPoint--;
		std::cout << "ScavTrap " << name << " attacks " \
			<< target << " , causing " << attackDamage \
			<< " points of damage!" << std::endl;
	}
	else
		std::cout << "ScavTrap " << name << " is out of energy." << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap "<< this->name << " is now in Gate keeper mode" << std::endl;
}

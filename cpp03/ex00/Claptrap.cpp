/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Claptrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <jaeshin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 21:46:25 by jaeshin           #+#    #+#             */
/*   Updated: 2023/10/15 22:32:31 by jaeshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
	this->name = name;
	this->hitPoint = 10;
	this->energyPoint = 10;
	this->attackDamage = 0;
	std::cout << "Claptrap " << this->name << " has been created." << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Claptrap " << this->name << " has been destroyed." << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (this->energyPoint)
	{
		this->energyPoint--;
		std::cout << "ClapTrap " << name << " attacks " \
			<< target << " , causing " << attackDamage \
			<< " points of damage!" << std::endl;
	}
	else
		std::cout << "ClapTrap " << name << " is out of energy." << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hitPoint)
	{
		this->hitPoint -= amount;
		std::cout << "ClapTrap "<< name << " takes " \
			<< amount << " points of damage!" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energyPoint)
	{
		this->hitPoint += amount;
		this->energyPoint--;
		std::cout << "ClapTrap "<< name << " repairs " \
			<< amount << " points!" << std::endl;
	}
	else
		std::cout << "ClapTrap " << name << " is out of energy." << std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <jaeshin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 22:41:36 by jaeshin           #+#    #+#             */
/*   Updated: 2023/10/15 23:01:04 by jaeshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

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

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap "<< this->name << " is now in Gate keeper mode" << std::endl;
}

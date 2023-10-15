/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <jaeshin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 22:29:48 by jaeshin           #+#    #+#             */
/*   Updated: 2023/10/15 23:01:01 by jaeshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:
	std::string	name;
	int			hitPoint;
	int			energyPoint;
	int			attackDamage;

public:
	ScavTrap(std::string name);
	~ScavTrap();

	void	guardGate();
};

#endif

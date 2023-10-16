/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <jaeshin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 22:07:06 by jaeshin           #+#    #+#             */
/*   Updated: 2023/10/16 14:03:43 by jaeshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap scavtrap("scav42");

	scavtrap.attack("Jaejun");
	scavtrap.takeDamage(42); // Accessble, it's public interitance
	scavtrap.beRepaired(42); // Accessble, it's public interitance
	scavtrap.guardGate();
	return (0);
}

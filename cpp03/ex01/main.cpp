/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <jaeshin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 22:07:06 by jaeshin           #+#    #+#             */
/*   Updated: 2023/10/15 23:01:20 by jaeshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap scavtrap("scav42");

	scavtrap.attack("Jaejun");
	scavtrap.beRepaired(42);
	return (0);
}

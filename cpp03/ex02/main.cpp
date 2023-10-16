/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <jaeshin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 22:07:06 by jaeshin           #+#    #+#             */
/*   Updated: 2023/10/16 14:53:50 by jaeshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main(void)
{
	FragTrap	fragTrap("42");

	fragTrap.takeDamage(42);
	fragTrap.beRepaired(42);
	fragTrap.highFivesGuys();
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <jaeshin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 22:07:06 by jaeshin           #+#    #+#             */
/*   Updated: 2023/10/15 22:33:00 by jaeshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap claptrap("42");

	for (int i = 0; i < 11; i++)
		claptrap.attack("Monster");
	claptrap.takeDamage(5);
	claptrap.beRepaired(5);
	return (0);
}

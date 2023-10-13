/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <jaeshin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 12:54:38 by jaeshin           #+#    #+#             */
/*   Updated: 2023/10/13 22:22:57 by jaeshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main( void )
{
	if (bsp(Point(0, 0), Point(10, 30), Point(20,0), Point(20, 15)))
		std::cout << "The point is inside of the triangle" << std::endl;
	else
		std::cout << "The point is outside of the triangle" << std::endl;
	return 0;
}

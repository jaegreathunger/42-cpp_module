/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <jaeshin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 12:54:38 by jaeshin           #+#    #+#             */
/*   Updated: 2023/10/13 14:52:22 by jaeshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int main( void )
{
	Point point;
	const Point point2(10, 10);
	
	std::cout << point.getX() << std::endl;
	point = point2;
	std::cout << point.getX() << std::endl;
	
	return 0;
}

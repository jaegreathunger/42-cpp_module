/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <jaeshin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 13:08:03 by jaeshin           #+#    #+#             */
/*   Updated: 2023/10/13 22:22:28 by jaeshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static Fixed abs(Fixed fpn)
{
	if (fpn < 0)
		return fpn * -1;
	return fpn;
}

static Fixed	area(Point const a, Point const b, Point const c)
{
	return ((a.getX() * (b.getY() - c.getY())) \
	 		+ (b.getX() * (c.getY() - a.getY())) \
	  		+ (c.getX() * (a.getY() - b.getY()))) / 2;
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed	area1 = abs(area(a, b, c));
	Fixed	area2 = abs(area(point, b, c));
	Fixed	area3 = abs(area(a, point, c));
	Fixed	area4 = abs(area(a, b, point));

	return (area1 == area2 + area3 + area4);
}

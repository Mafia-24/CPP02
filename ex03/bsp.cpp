/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymafaman <ymafaman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 01:45:34 by ymafaman          #+#    #+#             */
/*   Updated: 2024/07/15 00:05:58 by ymafaman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsp.hpp"

/*
	A (x1, y1);
	B (x2, y2);
	C (x3, y3);

	To find the area of the triangle ABC with vertices, we use the formula:

	Area of ΔABC = (1/2) |x1(y2 − y3) + x2(y3 − y1)+ x3(y1 − y2)|
*/

static void calc_area( Point const a, Point const b, Point const c, Fixed& area )
{
	Fixed half(0.5f);
	Fixed zero(0.0f);
	Fixed negativeOne(-1.0f);

	area = half * (a.get_x() * (b.get_y() - c.get_y()) + b.get_x() * (c.get_y() - a.get_y()) + c.get_x() * (a.get_y() - b.get_y()));

	if (area < zero)
		area = area * negativeOne;
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed area1;
	Fixed area2;
	Fixed area3;
	Fixed glob_area;

	calc_area (a, b, point, area1);
	calc_area (a, c, point, area2);
	calc_area (b, c, point, area3);
	calc_area (a, b, c, glob_area);

	if (area1 == Fixed(0.0f) || area2 == Fixed(0.0f) || area3 == Fixed(0.0f))
		return (false);
	return (glob_area == area1 + area2 + area3);
}
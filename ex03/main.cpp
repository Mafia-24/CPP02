/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymafaman <ymafaman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 06:08:28 by ymafaman          #+#    #+#             */
/*   Updated: 2024/07/15 06:35:14 by ymafaman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"
#include "bsp.hpp"
#include <iostream>

int main( void ) {

	Point A(0.0f, 3.0f);
	Point B(3.0f, 3.0f);
	Point C(3.0f, -1.0f);
	Point P(2.5f, 2.6f);

	if (bsp(A, B, C, P))
		std::cout << "The point P(" << P.get_x() << ", " << P.get_y() << ") is inside of the triangle ABC." << std::endl;
	else
		std::cout << "The point P(" << P.get_x() << ", " << P.get_y() << ") is NOT inside of the triangle ABC." << std::endl;

	return 0;
}
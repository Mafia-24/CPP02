/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymafaman <ymafaman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 06:08:28 by ymafaman          #+#    #+#             */
/*   Updated: 2024/07/14 03:31:28 by ymafaman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"
#include "bsp.hpp"
#include <iostream>

int main( void ) {
	
	Point a(1.0f, 2.0f);
	Point b(3.0f, 3.0f);
	Point c(3.0f, -1.0f);
	Point p(2.5f, 2.0f);

	std::cout << bsp(a, b, c, p) << std::endl;

	return 0;
}
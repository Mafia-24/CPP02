/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymafaman <ymafaman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 01:04:28 by ymafaman          #+#    #+#             */
/*   Updated: 2024/07/14 03:16:59 by ymafaman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point( void )
{
	// std::cout << "Point's class default constructor called!" << std::endl;	
}

Point::Point( float x, float y ) : x(Fixed(x)), y(Fixed(y))
{
	// std::cout << "Point's class parametrized constructor called!" << std::endl;
}

Point::Point( const Point& ref)
{
	// std::cout << "Point's class copy constructor called!" << std::endl;
	*this = ref;
}

Point& Point::operator=(const Point& rhs)
{
	// std::cout << "Point's class copy assignment operator is used!" << std::endl;

	if (this == &rhs)
	{
		return (*this);
	}

	this->x = rhs.x;
	this->y = rhs.y;

	return (*this);
}

void	Point::set_x( const Fixed& x )
{
	this->x = x;
}

void	Point::set_y( const Fixed& y )
{
	this->x = y;
}

const Fixed&	Point::get_x( void ) const
{
	return (this->x);
}

const Fixed&	Point::get_y( void ) const
{
	return (this->y);
}

Point::~Point()
{
	// std::cout << "Point's destructor called!";
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymafaman <ymafaman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 00:59:04 by ymafaman          #+#    #+#             */
/*   Updated: 2024/07/14 01:33:12 by ymafaman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point{

	Fixed x;
	Fixed y;

public :

	// Constructors
	Point( void );
	Point( float x, float y);
	Point( const Point& ref);

	// Destructor
	~Point();

	// Copy assignment operator overload
	Point& operator=(const Point& rhs);

	// getters and setters
	void	set_x( const Fixed& x );
	void	set_y( const Fixed& y );
	
	const Fixed&	get_x( void ) const;
	const Fixed&	get_y( void ) const;

};


#endif
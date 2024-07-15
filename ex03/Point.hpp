/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymafaman <ymafaman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 00:59:04 by ymafaman          #+#    #+#             */
/*   Updated: 2024/07/15 06:23:23 by ymafaman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point{

public :

	Point( void );
	Point( float x, float y);
	Point( const Point& ref);

	~Point();

	Point& operator=(const Point& rhs);

	void	set_x( const Fixed& x );
	void	set_y( const Fixed& y );
	
	const Fixed&	get_x( void ) const;
	const Fixed&	get_y( void ) const;

private :

	Fixed x;
	Fixed y;

};


#endif
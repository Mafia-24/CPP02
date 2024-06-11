/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymafaman <ymafaman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 23:26:44 by ymafaman          #+#    #+#             */
/*   Updated: 2024/06/02 01:57:38 by ymafaman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed{

	int					value;
	static const int	f_bits_number;

public :

	Fixed();
	Fixed( const int value );
	Fixed( const float value );
	Fixed( const Fixed &ref );

	~Fixed();
	
	int getRawBits( void ) const;

	void setRawBits( int const raw );

	float toFloat( void ) const;

	int toInt( void ) const;
	
	Fixed operator=( Fixed const added );
	

};

std::ostream &operator<<(std::ostream& out, Fixed const& to_print );

#endif
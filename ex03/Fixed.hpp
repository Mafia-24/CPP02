/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymafaman <ymafaman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 23:26:44 by ymafaman          #+#    #+#             */
/*   Updated: 2024/07/15 06:03:18 by ymafaman         ###   ########.fr       */
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
	
	int getRawBits( void ) const;

	void setRawBits( int const raw );

	float toFloat( void ) const;

	int toInt( void ) const;
	
	Fixed& operator= ( const Fixed&  added );

	bool operator<(const Fixed& rhs) const;

	bool operator> (const Fixed& rhs) const;

	bool operator<= (const Fixed& rhs) const;
	
	bool operator>= (const Fixed& rhs) const;

	bool operator== (const Fixed& rhs) const;

	bool operator!= (const Fixed& rhs) const;
	
	Fixed operator+ ( const Fixed& rhs ) const;
	
	Fixed operator- ( const Fixed& rhs ) const;
	
	Fixed operator* ( const Fixed& rhs ) const;
	
	Fixed operator/ ( const Fixed& rhs ) const;

	Fixed operator++ ( void ); // prefix

	Fixed operator++ ( int ); //postfix it has a dummy parameter it must be an int

	Fixed operator-- ( void ); // prefix

	Fixed operator-- ( int ); //postfix it has a dummy parameter

	static Fixed& min(Fixed& a, Fixed& b);

	const static Fixed& min(const Fixed& a, const Fixed& b);

	static Fixed& max(Fixed& a, Fixed& b);

	const static Fixed& max(const Fixed& a, const Fixed& b);

	~Fixed();

};

std::ostream &operator<<(std::ostream& out, Fixed const& to_print );

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymafaman <ymafaman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 23:26:44 by ymafaman          #+#    #+#             */
/*   Updated: 2024/07/15 06:24:25 by ymafaman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed{

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

	Fixed operator++ ( void );

	Fixed operator++ ( int );

	Fixed operator-- ( void );

	Fixed operator-- ( int );

	static Fixed& min(Fixed& a, Fixed& b);

	const static Fixed& min(const Fixed& a, const Fixed& b);

	static Fixed& max(Fixed& a, Fixed& b);

	const static Fixed& max(const Fixed& a, const Fixed& b);

	~Fixed();

private :

	int					value;
	static const int	f_bits_number;

};

std::ostream &operator<<(std::ostream& out, Fixed const& to_print );

#endif
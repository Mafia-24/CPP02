/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymafaman <ymafaman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 23:26:40 by ymafaman          #+#    #+#             */
/*   Updated: 2024/07/12 23:17:15 by ymafaman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Fixed.hpp"
#include <cmath>

const int	Fixed::f_bits_number = 8;

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->value = 0;
}

Fixed::Fixed( const int value )
{
	std::cout << "Int constructor called" << std::endl;
	this->value = value * (1 << Fixed::f_bits_number); // shifting the int value will place 0's at the right most f_bits_number bits. 
}

// here what are we going to do is change the exponent value because multiplying by 2pow8 will be mixed with the exponent becuase it alread does a 2pown operation thus the point will move 8 bits to the right and when we are going to store for example 42.42 as integer it will be stored as 4242
// the rounding is done because we are trying to lose as least amount of fractional value as possible for example if it s 4242.6 we better store 4243 and if it s 4242.3 we better store 4242

Fixed::Fixed( const float value )
{
	std::cout << "Float constructor called" << std::endl;
	this->value = roundf((value * (1 << Fixed::f_bits_number))); // this is equivalent to moving f_bits_number of bits that are in the right of the fixed point to left side.
}

Fixed::Fixed(const Fixed &ref)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = ref;
}

void	Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called" << std::endl;
	this->value = raw;
}

int	Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->value);
}

Fixed& Fixed::operator=(const Fixed& added)
{
	std::cout << "Copy assignment operator called" << std::endl;

	if (this == &added)
	{
		return (*this);
	}

	this->value = added.value;

	return (*this);
}

int Fixed::toInt( void ) const
{
	return (this->value >> Fixed::f_bits_number);
}

float Fixed::toFloat( void ) const
{
	return ((float) this->value / (1 << Fixed::f_bits_number));
}

std::ostream &operator<<(std::ostream& out, Fixed const& to_print )
{
	std::cout << "Value: " << to_print.getRawBits() << std::endl;
	out << to_print.toFloat();
	return (out);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}
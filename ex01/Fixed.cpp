/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymafaman <ymafaman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 23:26:40 by ymafaman          #+#    #+#             */
/*   Updated: 2024/07/15 06:13:27 by ymafaman         ###   ########.fr       */
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
	this->value = value * (1 << Fixed::f_bits_number);
}

Fixed::Fixed( const float value )
{
	std::cout << "Float constructor called" << std::endl;
	this->value = roundf((value * (1 << Fixed::f_bits_number)));
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

	this->value = added.getRawBits();

	return (*this);
}

int Fixed::toInt( void ) const
{
	return (this->value / (1 << Fixed::f_bits_number));
}

float Fixed::toFloat( void ) const
{
	return ((float) this->value / (1 << Fixed::f_bits_number));
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

// ostream operator << overload

std::ostream &operator<<(std::ostream& out, Fixed const& to_print )
{
	out << to_print.toFloat();
	return (out);
}
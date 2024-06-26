/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymafaman <ymafaman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 23:26:40 by ymafaman          #+#    #+#             */
/*   Updated: 2024/06/02 01:59:26 by ymafaman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Fixed.hpp"

const int	Fixed::f_bits_number = 8;

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->value = 0;
}

Fixed::Fixed( const int value )
{
	std::cout << "Int constructor called" << std::endl;
	this->value = value << Fixed::f_bits_number;
}

Fixed::Fixed( const float value )
{
	std::cout << "Float constructor called" << std::endl;
	this->value = value * (1 << Fixed::f_bits_number);
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

Fixed Fixed::operator=(Fixed const added)
{
	Fixed temp;

	temp = added;
	return (temp);
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
	out << to_print.toFloat();
	return (out);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymafaman <ymafaman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 23:26:40 by ymafaman          #+#    #+#             */
/*   Updated: 2024/07/15 06:37:12 by ymafaman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::f_bits_number = 8;

Fixed::Fixed()
{
	// std::cout << "Default constructor called" << std::endl;
	this->value = 0;
}

Fixed::Fixed( const int value )
{
	// std::cout << "Int constructor called" << std::endl;
	this->value = value * (1 << Fixed::f_bits_number);
}

Fixed::Fixed( const float value )
{
	// std::cout << "Float constructor called" << std::endl;
	this->value = roundf (value * (1 << Fixed::f_bits_number));
}

Fixed::Fixed(const Fixed &ref)
{
	// std::cout << "Copy constructor called" << std::endl;
	*this = ref;
} 	

void	Fixed::setRawBits( int const raw )
{
	// std::cout << "setRawBits member function called" << std::endl;
	this->value = raw;
}

int	Fixed::getRawBits( void ) const
{
	// std::cout << "getRawBits member function called" << std::endl;
	return (this->value);
}

Fixed& Fixed::operator=(const Fixed& added) // why this name 
{

	// std::cout << "Copy assignment operator called" << std::endl;

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
	return ( (float) this->value / (1 << Fixed::f_bits_number));
}

bool Fixed::operator<(const Fixed& rhs) const
{
	return (this->value < rhs.value);
}

bool Fixed::operator>(const Fixed& rhs) const
{
	return (this->value > rhs.value);
}

bool Fixed::operator<=(const Fixed& rhs) const
{
	return (this->value <= rhs.value);
}

bool Fixed::operator>=(const Fixed& rhs) const
{
	return (this->value >= rhs.value);
}

bool Fixed::operator==( const Fixed& rhs ) const
{
	return (this->value == rhs.value);
}

bool Fixed::operator!=( const Fixed& rhs ) const
{
	return (this->value != rhs.value);
}

Fixed Fixed::operator+( const Fixed& rhs ) const
{
	Fixed newFixed;

	newFixed.setRawBits (this->getRawBits () + rhs.getRawBits ());

	return (newFixed);
}

Fixed Fixed::operator-( const Fixed& rhs ) const
{
	Fixed newFixed;

	newFixed.setRawBits (this->getRawBits () - rhs.getRawBits ());

	return (newFixed);
}

Fixed Fixed::operator*( const Fixed& rhs ) const
{
	Fixed newFixed;

	newFixed.setRawBits (((uint64_t) this->getRawBits () * rhs.getRawBits ()) / (1 << Fixed::f_bits_number));

	return (newFixed);
}

Fixed Fixed::operator/( const Fixed& rhs ) const
{
	Fixed newFixed;

	newFixed.setRawBits ((this->getRawBits () / rhs.getRawBits ()) * (1 << Fixed::f_bits_number));

	return (newFixed);
}

Fixed Fixed::operator++( void )
{
	this->value++;

	return (*this);
}

Fixed Fixed::operator++( int )
{
	Fixed alias(*this);

	this->value++;

	return (alias);
}

Fixed Fixed::operator--( void )
{
	this->value--;

	return (*this);
}

Fixed Fixed::operator--( int )
{
	Fixed alias(*this);

	this->value--;

	return (alias);
}

Fixed& Fixed::min(Fixed& a, Fixed& b)
{
	return (a <= b ? a : b);
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{

	return ((a <= b) ? a :  b);
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
	return (a >= b ? a : b);
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
	return (a >= b ? a : b);
}

Fixed::~Fixed()
{
	// std::cout << "Destructor called" << std::endl;
}

// ostream operator << overload

std::ostream &operator<<(std::ostream& out, Fixed const& to_print )
{
	out << to_print.toFloat();
	return (out);
}
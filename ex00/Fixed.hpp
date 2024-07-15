/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymafaman <ymafaman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 04:18:31 by ymafaman          #+#    #+#             */
/*   Updated: 2024/07/15 06:22:08 by ymafaman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed{

public :

	Fixed();
	Fixed(const Fixed &ref);
	
	
	~Fixed();
	
	int getRawBits( void ) const;
	void setRawBits( int const raw );
	
	Fixed &operator=(Fixed const& added);

private :

	int					value;
	static const int	f_bits_number;
};


#endif
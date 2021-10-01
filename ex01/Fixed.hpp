/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calle <calle@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 16:58:17 by calle             #+#    #+#             */
/*   Updated: 2021/10/01 18:25:23 by calle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>

class Fixed {

	public:
		Fixed();
		Fixed( const int value );
		Fixed( const float value );
		Fixed( Fixed const & src );
		~Fixed();

		int	getRawBits( void ) const;
		void	setRawBits( int const raw );
		float	toFloat( void ) const;
		int	toInt( void ) const;

		bool	isFloat( void ) const;

		Fixed & operator=( Fixed const & rhs );
		
	private:
		int	_fixedPointValue;
		static const int _fractionalBits = 8;
		int	_getFractionalBits( void ) const;
};

std::ostream & operator<<( std::ostream & o, Fixed const & rhs );
#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calle <calle@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 16:58:17 by calle             #+#    #+#             */
/*   Updated: 2021/10/08 12:53:52 by calle            ###   ########.fr       */
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

		bool	isFloat( void ) const;

		float	toFloat( void ) const;
		int	toInt( void ) const;

		bool	operator< ( Fixed const & rhs ) const;
		bool	operator> ( Fixed const & rhs ) const;
		bool	operator<=( Fixed const & rhs ) const;
		bool	operator>=( Fixed const & rhs ) const;
		bool	operator==( Fixed const & rhs ) const;
		bool	operator!=( Fixed const & rhs ) const;
		
		Fixed	&operator= ( Fixed const & rhs );
		Fixed	operator+ ( Fixed const & rhs ) const;
		Fixed	operator- ( Fixed const & rhs ) const;
		Fixed	operator* ( Fixed const & rhs ) const;
		Fixed	operator/ ( Fixed const & rhs ) const;
		
		Fixed	&operator++( void );
		Fixed	&operator--( void );
		Fixed	operator++( int );
		Fixed	operator--( int );

		static const int epsilon = 1 << 8; 

		static Fixed &min( Fixed &n1, Fixed &n2 );
		static const Fixed &min( const Fixed &n1, const Fixed &n2 );

		static Fixed &max( Fixed &n1, Fixed &n2 );
		static const Fixed &max( const Fixed &n1, const Fixed &n2 );

	private:
		int	_fixedPointValue;
		static const int _fractionalBits = 8;
		int	_getFractionalBits( void ) const;
		Fixed _operationResult( int resultIsfloat, int operation ) const;
};

std::ostream & operator<<( std::ostream & o, Fixed const & rhs );
#endif

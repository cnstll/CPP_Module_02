/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calle <calle@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 16:58:17 by calle             #+#    #+#             */
/*   Updated: 2021/10/05 14:40:06 by calle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
//• Six comparison operators: >, <, >=, <=, == and !=.
//• Four arithmetic operators: +, -, *, and /.
//• The pre-increment, post-increment, pre-decrement and post-decrement operators,
//that will increment or decrement the fixed point value from the smallest representable  such as 1 +  > 1.
//Add the following public static member functions overloads to your class:
//• The static member function min that takes references on two fixed point values and
//returns a reference to the smallest value, and an overload that takes references on
//two constant fixed point values and returns a reference to the smallest constant
//value.
//• The static member function max that takes references on two fixed point values
//and returns a reference to the biggest value, and an overload that takes references
//on two constant fixed point values and returns a reference to the biggest constant
//value
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

		Fixed & operator= ( Fixed const & rhs );
		Fixed  operator+ ( Fixed const & rhs ) const;
		Fixed  operator- ( Fixed const & rhs ) const;
		Fixed  operator* ( Fixed const & rhs ) const;
		Fixed  operator/ ( Fixed const & rhs ) const;

		bool operator< ( Fixed const & rhs ) const;
		bool operator> ( Fixed const & rhs ) const;
		bool operator<=( Fixed const & rhs ) const;
		bool operator>=( Fixed const & rhs ) const;
		bool operator==( Fixed const & rhs ) const;
		bool operator!=( Fixed const & rhs ) const;
		
	private:
		int	_fixedPointValue;
		static const int _fractionalBits = 8;
		int	_getFractionalBits( void ) const;
};

std::ostream & operator<<( std::ostream & o, Fixed const & rhs );
#endif

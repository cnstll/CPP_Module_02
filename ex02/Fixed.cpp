/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calle <calle@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 17:03:10 by calle             #+#    #+#             */
/*   Updated: 2021/10/05 19:03:40 by calle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed() : _fixedPointValue(0){

	std::cout << "Default constructor called\n";
	return ;
};

Fixed::Fixed( const int value ){

	std::cout << "Int constructor called\n";
	setRawBits((int)(value << _getFractionalBits()));
	return ;
};

Fixed::Fixed( const float value ){

	std::cout << "Float constructor called\n";
	setRawBits((int)(roundf(value * (1 << _getFractionalBits()))));
	return ;
};

Fixed::Fixed( Fixed const & src ){

	std::cout << "Copy constructor called\n";
	*this = src;
	return ;
};

Fixed::~Fixed(){

	std::cout << "Destructor called\n";
	return;
}

int	Fixed::getRawBits( void ) const {

	//std::cout << "getRawBits member function called\n";
	return _fixedPointValue;
}

int	Fixed::_getFractionalBits( void ) const {

	return _fractionalBits;
}

void	Fixed::setRawBits( int const raw ){

	_fixedPointValue = raw;	
}

float	Fixed::toFloat( void ) const {

	return ((float)(getRawBits() / (float)(1 << _getFractionalBits())));
}

int	Fixed::toInt( void ) const {
	
	return ((int)(getRawBits() >> _getFractionalBits()));
}

bool Fixed::isFloat( void ) const {

	for (int i = 0; i < _getFractionalBits(); i++)
		if (((getRawBits() & (1 << i)) >> i) == 1)
			return true;
	return false;
}

Fixed & Fixed::operator= ( Fixed const & rhs ){
	
	std::cout << "Assignation operator called\n";
  	this->_fixedPointValue = rhs.getRawBits();
	return *this;
}

Fixed	Fixed::operator+ ( Fixed const & rhs ) const{

  	return ( this->_fixedPointValue + rhs.getRawBits() ) >> _getFractionalBits();
}

Fixed	Fixed::operator- ( Fixed const & rhs ) const{

  	return ( this->_fixedPointValue - rhs.getRawBits() );
}

Fixed	Fixed::operator* ( Fixed const & rhs ) const{

  	return ( this->_fixedPointValue * rhs.getRawBits());
}

Fixed	Fixed::operator/ ( Fixed const & rhs ) const{

  	return ( this->_fixedPointValue * rhs.getRawBits());
}

bool Fixed::operator< (  Fixed const & rhs ) const{

	return (this->_fixedPointValue < rhs.getRawBits());
}

bool Fixed::operator> (  Fixed const & rhs ) const {

	return (this->getRawBits() > rhs.getRawBits());
}

bool Fixed::operator<=(  Fixed const & rhs ) const {

	return (!operator> (rhs));
}
bool Fixed::operator>=(  Fixed const & rhs ) const {

	return (!operator< (rhs));
}

bool Fixed::operator==(  Fixed const & rhs ) const {

	return (this->getRawBits() == rhs.getRawBits());
}

bool Fixed::operator!=(  Fixed const & rhs ) const {

	return (!operator== (rhs));
}

std::ostream & operator<<( std::ostream & o, Fixed const & rhs){

	if (rhs.isFloat())
		o << rhs.toFloat();
	else
		o << rhs.toInt();
	return o;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calle <calle@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 17:03:10 by calle             #+#    #+#             */
/*   Updated: 2021/10/08 16:31:06 by calle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed() : _fixedPointValue(0){

	//std::cout << "Default constructor called\n";
	return ;
};

Fixed::Fixed( const int value ){

	//std::cout << "Int constructor called\n";
	setRawBits(value << _getFractionalBits());
	return ;
};

Fixed::Fixed( const float value ){

	//std::cout << "Float constructor called\n";
	setRawBits((int)(roundf(value * (1 << _getFractionalBits()))));
	return ;
};

Fixed::Fixed( Fixed const & src ){

	//std::cout << "Copy constructor called\n";
	*this = src;
	return ;
};

Fixed::~Fixed(){

	//std::cout << "Destructor called\n";
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

	return (((float)getRawBits()) / (1 << _getFractionalBits()));
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
	
	//std::cout << "Assignation operator called\n";
  	this->_fixedPointValue = rhs.getRawBits();
	return *this;
}

Fixed	Fixed::_operationResult( int resultIsFloat, int operation) const{
	if (resultIsFloat)
		return (((float)operation) / (float)(1 <<  _getFractionalBits()));
	else
		return (operation >> _getFractionalBits());
}

Fixed	Fixed::operator+ ( Fixed const & rhs ) const{

 	int sum = this->_fixedPointValue + rhs.getRawBits();
    int resultIsFloat = rhs.isFloat() || this->isFloat();
	return (_operationResult( resultIsFloat, sum));
}

Fixed	Fixed::operator- ( Fixed const & rhs ) const{

 	int diff = this->_fixedPointValue - rhs.getRawBits();
    int resultIsFloat = rhs.isFloat() || this->isFloat();
	return (_operationResult( resultIsFloat, diff));
}

Fixed	Fixed::operator* ( Fixed const & rhs ) const{

 	int mul = ((this->_fixedPointValue >> 4) * (rhs.getRawBits() >> 4));
    int resultIsFloat = rhs.isFloat() || this->isFloat();
	return (_operationResult( resultIsFloat, mul));
}

Fixed	Fixed::operator/ ( Fixed const & rhs ) const{

	const int	BIT_SHIFT = 8;
	int numerator = this->_fixedPointValue;
	int denominator = rhs.getRawBits();
	if (denominator != 0)
	{
		int div = ( ((long)numerator << BIT_SHIFT) / (long)denominator );
    	int resultIsFloat = rhs.isFloat() || this->isFloat();
		return (_operationResult( resultIsFloat, div));
	}
	else
	{
		std::cerr << "/n>> Error: Division by ";
		return ( 0 );
	}
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

Fixed	& Fixed::operator++( void ) {

	int	temp = 	this->getRawBits();

	this->setRawBits(++temp);
	return *this;
}

Fixed	& Fixed::operator--( void ) {

	int	temp = 	this->getRawBits();

	this->setRawBits(--temp);
	return *this;
}

Fixed	Fixed::operator++( int ) {

	Fixed temp(*this);

	++(*this);
	return temp;
}

Fixed	Fixed::operator--( int ) {

	Fixed temp(*this);

	--(*this);
	return temp;
}

Fixed &Fixed::min( Fixed &n1, Fixed &n2 ){

	return ( n1 < n2 ? n1 : n2 );
}

const Fixed &Fixed::min( const Fixed &n1, const Fixed &n2 ){

	return ( n1 < n2 ? n1 : n2 );
}

Fixed &Fixed::max( Fixed &n1, Fixed &n2 ){

	return ( n1 > n2 ? n1 : n2 );
}

const Fixed &Fixed::max( const Fixed &n1, const Fixed &n2 ){

	return ( n1 > n2 ? n1 : n2 );
}

std::ostream & operator<<( std::ostream & o, Fixed const & rhs){

	return (rhs.isFloat() ? o << rhs.toFloat() : o << rhs.toInt());
}

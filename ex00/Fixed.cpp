/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calle <calle@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 17:03:10 by calle             #+#    #+#             */
/*   Updated: 2021/10/01 09:51:48 by calle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed() : _fixedPointValue(0){

	std::cout << "Default constructor called\n";
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

int	Fixed::getRawBits( void ) const{

	std::cout << "getRawBits member function called\n";
	return _fixedPointValue;
}


void	Fixed::setRawBits( int const raw ){

	std::cout << "setRawBits member function called\n";
	_fixedPointValue = raw;	
}

Fixed & Fixed::operator=( Fixed const & rhs ){
	
	std::cout << "Assignation operator called\n";
  	this->_fixedPointValue = rhs.getRawBits();
	return *this;
}

std::ostream & operator<<( std::ostream & o, Fixed const & rhs){
	
	o << rhs.getRawBits();
	return o;
}

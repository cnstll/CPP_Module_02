/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calle <calle@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 12:36:20 by calle             #+#    #+#             */
/*   Updated: 2021/10/08 16:54:14 by calle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <iostream>


Point::Point( void ) : x(0), y(0) {};

Point::Point( Point const & srcPoint ) :
	x(srcPoint.getPx()), y(srcPoint.getPy()){

};

Point::Point( Fixed const a, Fixed const b ) : x(a), y(b) {};
Point::~Point( void ){};

Fixed Point::getPx( void ) const{ return ( x ); };

Fixed Point::getPy( void ) const{ return ( y ); };

std::ostream & operator<<( std::ostream & out, Point const & rhs){

	return ( out << "(" << rhs.getPx() << "," << rhs.getPy() << ")");
}

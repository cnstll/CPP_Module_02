/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calle <calle@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 12:36:20 by calle             #+#    #+#             */
/*   Updated: 2021/10/08 12:55:26 by calle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <iostream>

Point::Point( void ) : x(0), y(0) {};

Point::Point( Point const & srcPoint ){

	*this = srcPoint;
	return ;
};

Point::Point( Fixed const a, Fixed const b ) : x(a), y(a) {};
Point::~Point( void ){};

std::ostream & operator<<( std::ostream & out, Point const & rhs){

	return ( out << rhs);
}

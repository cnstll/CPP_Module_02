/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calle <calle@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 12:36:47 by calle             #+#    #+#             */
/*   Updated: 2021/10/08 18:19:09 by calle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"
#include <iostream>

class Point {
	private:
		Fixed const	x;
		Fixed const	y;

	public:
		Point( void );
		Point( Point const & srcPoint );
		Point( Fixed const a, Fixed const b );
		~Point( void );

		Fixed getPx( void ) const;	
		Fixed getPy( void ) const;

};

std::ostream & operator<<( std::ostream & out, Point const & rhs );

#endif

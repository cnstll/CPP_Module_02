/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calle <calle@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 12:36:47 by calle             #+#    #+#             */
/*   Updated: 2021/10/08 12:55:28 by calle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"
#include <iostream>
//Private members:
//◦ A Fixed const x
//◦ A Fixed const y
//◦ Anything else you judge useful.
//• Public members:
//◦ A default constructor that initializes x and y to 0.
//◦ A destructor.
//◦ A copy constructor.
//◦ A constructor that takes two constant floating points as parameters and that
//initializes x and y with those values.
//◦ An assignation operator overload.
//◦ Anything else you judge useful.
class Point {
	private:
		Fixed const	x;
		Fixed const	y;

	public:
		Point( void );
		Point( Point const & srcPoint );
		Point( Fixed const a, Fixed const b );
		~Point( void );

};

std::ostream & operator<<( std::ostream & out, Fixed const & rhs );

#endif

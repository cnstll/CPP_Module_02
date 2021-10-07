/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calle <calle@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 18:42:23 by calle             #+#    #+#             */
/*   Updated: 2021/10/07 17:58:29 by calle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main( void ) {
	Fixed a;
	Fixed const b( -2.75f );
	Fixed const c( 10.5f );
	Fixed const d( -2.625f );
	Fixed const e( 10.5f );
	Fixed f( -1.3125f );

	std::cout << std::endl;	
	std::cout << "------TEST VALUES------" << std::endl;	
	std::cout << std::endl;	
	std::cout << "a: " << a << std::endl;
	std::cout << "b: " << b << std::endl;
	std::cout << "c: " << c << std::endl;
	std::cout << "d: " << d << std::endl;
	std::cout << "e: " << e << std::endl;
	std::cout << "f: " << f << std::endl;

	std::cout << std::endl;	
	std::cout << "------COMPARISONS------" << std::endl;	
	std::cout << std::endl;	

	std::cout << "a < b : " << a << " < " << b << " is " << (a < b) <<  std::endl;
	std::cout << "a > b : " << a << " > " << b << " is " << (a > b) <<  std::endl;
	std::cout << "a >= b : " << a << " >= " << b << " is " << (a >= b) <<  std::endl;
	std::cout << "a <= b : " << a << " <= " << b << " is " << (a <= b) <<  std::endl;
	std::cout << "a == b : " << a << " == " << b << " is " << (a == b) <<  std::endl;
	std::cout << "a != b : " << a << " != " << b << " is " << (a != b) <<  std::endl;
	std::cout << "c < d : " << c << " < " << d << " is " << (c < d) <<  std::endl;
	std::cout << "c > d : " << c << " > " << d << " is " << (c > d) <<  std::endl;
	std::cout << "c >= d : " << c << " >= " << d << " is " << (c >= d) <<  std::endl;
	std::cout << "c <= d : " << c << " <= " << d << " is " << (c <= d) <<  std::endl;
	std::cout << "c == d : " << c << " == " << d << " is " << (c == d) <<  std::endl;
	std::cout << "c != d :  " << c << " != " << d << " is " << (c != d) <<  std::endl;

	std::cout << std::endl;	
	std::cout << "------OPERATIONS------" << std::endl;	
	std::cout << std::endl;	

	std::cout << "a + b : " << a << " + " << b << " is " << (a + b) <<  std::endl;
	std::cout << "c + d : " << c << " + " << d << " is " << (c + d) <<  std::endl;
	std::cout << "c + 2 : " << c << " + " << -2.75f << " is " << (c + -2.75f) <<  std::endl;
	std::cout << "a - b : " << a << " - " << b << " is " << (a - b) <<  std::endl;
	std::cout << "c - d : " << c << " - " << d << " is " << (c - d) <<  std::endl;
	std::cout << "a * b : " << a << " * " << b << " is " << (a * b) <<  std::endl;
	std::cout << "c * d : " << c << " * " << d << " is " << (c * d) <<  std::endl;
	std::cout << "a / b : " << a << " / " << b << " is " << (a / b) <<  std::endl;
	std::cout << "c / d : " << c << " / " << d << " is " << (c / d) <<  std::endl;
	std::cout << "b / f : " << b << " / " << f << " is " << (b / f) <<  std::endl;

	std::cout << std::endl;	
	std::cout << "------INCREMENT/DECREMENT------" << std::endl;	
	std::cout << std::endl;	

	std::cout << "a is " << a << " before prefix increment" << std::endl;
	std::cout << "prefix increment yields: " << ++a << std::endl;
	std::cout << "a is " << a << " after prefix increment" << std::endl;
	std::cout << "a is " << a << " before postfix increment" << std::endl;
	std::cout << "postfix increment yields: " << a++ << std::endl;
	std::cout << "a is " << a << " after postfix increment" << std::endl;

	std::cout << std::endl;	

	std::cout << "a is " << a << " before prefix decrement" << std::endl;
	std::cout << "prefix decrement yields: " << --a << std::endl;
	std::cout << "a is " << a << " after prefix decrement" << std::endl;
	std::cout << "a is " << a << " before postfix decrement" << std::endl;
	std::cout << "postfix decrement yields: " << a-- << std::endl;
	std::cout << "a is " << a << " after postfix decrement" << std::endl;
	
	std::cout << std::endl;	
	std::cout << "------MIN/MAX------" << std::endl;	
	std::cout << std::endl;

	std::cout << "min(a, b) = " << a.min(a, b) << std::endl;
	std::cout << "min(b, a) = " << a.min(b, a) << std::endl;
	std::cout << "min(c, d) = " << a.min(c, d) << std::endl;
	std::cout << "min(d, c) = " << a.min(d, c) << std::endl;
	std::cout << "min(a, f) = " << a.min(a, f) << std::endl;
	std::cout << "min(f, a) = " << a.min(f, a) << std::endl;

	std::cout << std::endl;	

	std::cout << "max(a, b) = " << a.max(a, b) << std::endl;
	std::cout << "max(b, a) = " << a.max(b, a) << std::endl;
	std::cout << "max(c, d) = " << a.max(c, d) << std::endl;
	std::cout << "max(d, c) = " << a.max(d, c) << std::endl;
	std::cout << "max(a, f) = " << a.max(a, f) << std::endl;
	std::cout << "max(f, a) = " << a.max(f, a) << std::endl;
	return 0;
}

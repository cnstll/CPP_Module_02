/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calle <calle@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 18:42:23 by calle             #+#    #+#             */
/*   Updated: 2021/10/06 18:44:55 by calle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main( void ) {
	Fixed a;
	Fixed const b( -2.75f );
	Fixed const c( 7.5f );
	Fixed const d( 2 );
	Fixed const e( 10.5f );
	//Fixed const e( 2 );
	//const int f = 3;

//	std::cout << "a < b : " << a << " < " << b << " is " << (a < b) <<  std::endl;
//	std::cout << "a > b : " << a << " > " << b << " is " << (a > b) <<  std::endl;
//	std::cout << "a >= b : " << a << " >= " << b << " is " << (a >= b) <<  std::endl;
//	std::cout << "a <= b : " << a << " <= " << b << " is " << (a <= b) <<  std::endl;
//	std::cout << "a == b : " << a << " == " << b << " is " << (a == b) <<  std::endl;
//	std::cout << "a != b : " << a << " != " << b << " is " << (a != b) <<  std::endl;
	std::cout << "a: " << a << std::endl;
	std::cout << "b: " << b << std::endl;
	std::cout << "c: " << c << std::endl;
	std::cout << "d: " << d << std::endl;
	std::cout << "e: " << e << std::endl;
	std::cout << "a + b : " << a << " + " << b << " is " << (a + b) <<  std::endl;
	std::cout << "c + d : " << c << " + " << d << " is " << (c + d) <<  std::endl;
	std::cout << "c + 2 : " << c << " + " << -2.75f << " is " << (c + -2.75f) <<  std::endl;
	std::cout << "a - b : " << a << " - " << b << " is " << (a - b) <<  std::endl;
	std::cout << "c - d : " << c << " - " << d << " is " << (c - d) <<  std::endl;
	std::cout << "a * b : " << a << " * " << b << " is " << (a * b) <<  std::endl;
	std::cout << "c * d : " << c << " * " << d << " is " << (c * d) <<  std::endl;
	std::cout << "a / b : " << a << " / " << b << " is " << (a / b) <<  std::endl;
	std::cout << "c / d : " << c << " / " << d << " is " << (c / d) <<  std::endl;
	//std::cout << "a + f : " << a << " + " << f << " is " << (a + f) <<  std::endl;

	//std::cout << "c < d : " << c << " < " << d << " is " << (c < d) <<  std::endl;
	//std::cout << "c > d : " << c << " > " << d << " is " << (c > d) <<  std::endl;
	//std::cout << "c >= d : " << c << " >= " << d << " is " << (c >= d) <<  std::endl;
	//std::cout << "c <= d : " << c << " <= " << d << " is " << (c <= d) <<  std::endl;
	//std::cout << "c == d : " << c << " == " << d << " is " << (c == d) <<  std::endl;
	//std::cout << "c != d :  " << c << " != " << d << " is " << (c != d) <<  std::endl;

	std::cout << "a is " << a << " before prefix increment" << std::endl;
	std::cout << "prefix increment yields: " << ++a << std::endl;
	std::cout << "a is " << a << " after prefix increment" << std::endl;
	std::cout << "a is " << a << " before postfix increment" << std::endl;
	std::cout << "postfix increment yields: " << a++ << std::endl;
	std::cout << "a is " << a << " after postfix increment" << std::endl;
	return 0;
}

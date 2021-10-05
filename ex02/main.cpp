/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calle <calle@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 18:42:23 by calle             #+#    #+#             */
/*   Updated: 2021/10/04 18:01:18 by calle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main( void ) {
	Fixed const a( 10.000f );
	Fixed const b( 10 );
	Fixed const c( 42.42f );
	Fixed const d( 42 );
	//Fixed const e( 2 );
	const int f = 3;

	std::cout << "a < b : " << a << " < " << b << " is " << (a < b) <<  std::endl;
	std::cout << "a > b : " << a << " > " << b << " is " << (a > b) <<  std::endl;
	std::cout << "a >= b : " << a << " >= " << b << " is " << (a >= b) <<  std::endl;
	std::cout << "a <= b : " << a << " <= " << b << " is " << (a <= b) <<  std::endl;
	std::cout << "a == b : " << a << " == " << b << " is " << (a == b) <<  std::endl;
	std::cout << "a != b : " << a << " != " << b << " is " << (a != b) <<  std::endl;
	std::cout << "a + b : " << a << " + " << b << " is " << (a + b) <<  std::endl;
	std::cout << "a - b : " << a << " - " << b << " is " << (a - b) <<  std::endl;
	std::cout << "a * b : " << a << " * " << b << " is " << (a * b) <<  std::endl;
	std::cout << "a / b : " << a << " / " << b << " is " << (a / b) <<  std::endl;
	std::cout << "a + f : " << a << " + " << f << " is " << (a + f) <<  std::endl;

	std::cout << "c < d : " << c << " < " << d << " is " << (c < d) <<  std::endl;
	std::cout << "c > d : " << c << " > " << d << " is " << (c > d) <<  std::endl;
	std::cout << "c >= d : " << c << " >= " << d << " is " << (c >= d) <<  std::endl;
	std::cout << "c <= d : " << c << " <= " << d << " is " << (c <= d) <<  std::endl;
	std::cout << "c == d : " << c << " == " << d << " is " << (c == d) <<  std::endl;
	std::cout << "c != d :  " << c << " != " << d << " is " << (c != d) <<  std::endl;

	return 0;
}

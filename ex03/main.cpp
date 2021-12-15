/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calle <calle@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 18:42:23 by calle             #+#    #+#             */
/*   Updated: 2021/12/15 10:05:29 by calle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point);

int main( void ) {
	{
		Point a;
		Point b(3.0f, 1.0f);
		Point c( 1.0f, 3.0f );
		Point point( 1.0f, 1.0f );

		std::cout << std::endl;
		std::cout << "-----TEST 1-----" << std::endl;
		std::cout << ">> Triangle Vertices: " << std::endl;
		std::cout << "a: " << a << std::endl;
		std::cout << "b: " << b << std::endl;
		std::cout << "c: " << c << std::endl;
		std::cout << ">> Is the following Point in triangle ? " << std::endl;
		std::cout << "point: " << point << std::endl;
		std::cout << ">> Answer: " << (bsp(a, b ,c, point) == 1 ? "True" : "False") << std::endl;
	}
	{
		Point a;
		Point b(3.0f, 1.0f);
		Point c( 1.0f, 3.0f );
		Point point( 45.0f, 8.0f );

		std::cout << std::endl;
		std::cout << "-----TEST 2-----" << std::endl;
		std::cout << ">> Triangle Vertices: " << std::endl;
		std::cout << "a: " << a << std::endl;
		std::cout << "b: " << b << std::endl;
		std::cout << "c: " << c << std::endl;
		std::cout << ">> Is the following Point in triangle ? " << std::endl;
		std::cout << "point: " << point << std::endl;
		std::cout << ">> Answer: " << (bsp(a, b ,c, point) == 1 ? "True" : "False") << std::endl;
	}
	{
		Point a;
		Point b(3.0f, 0.0f);
		Point c( 0.0f, 3.0f );
		Point point( 0.0f, 2.625f );

		std::cout << std::endl;
		std::cout << "-----TEST 3-----" << std::endl;
		std::cout << ">> Triangle Vertices: " << std::endl;
		std::cout << "a: " << a << std::endl;
		std::cout << "b: " << b << std::endl;
		std::cout << "c: " << c << std::endl;
		std::cout << ">> Is the following Point in triangle ? " << std::endl;
		std::cout << "point: " << point << std::endl;
		std::cout << ">> Answer: " << (bsp(a, b ,c, point) == 1 ? "True" : "False") << std::endl;
	}
	{
		Point a;
		Point b( 3.0f, 0.0f );
		Point c( 0.0f, 3.0f );
		Point point( 0.0f, 3.015625f );

		std::cout << std::endl;
		std::cout << "-----TEST 4-----" << std::endl;
		std::cout << ">> Triangle Vertices: " << std::endl;
		std::cout << "a: " << a << std::endl;
		std::cout << "b: " << b << std::endl;
		std::cout << "c: " << c << std::endl;
		std::cout << ">> Is the following Point in triangle ? " << std::endl;
		std::cout << "point: " << point << std::endl;
		std::cout << ">> Answer: " << (bsp(a, b ,c, point) == 1 ? "True" : "False") << std::endl;
	}
	return 0;
}

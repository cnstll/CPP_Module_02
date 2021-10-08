/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calle <calle@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 12:38:42 by calle             #+#    #+#             */
/*   Updated: 2021/10/08 18:22:06 by calle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed s1 = c.getPy() - a.getPy();
	Fixed s2 = c.getPx() - a.getPx();
	Fixed s3 = b.getPy() - a.getPy();
	Fixed s4 = point.getPy() - a.getPy();

	Fixed w1 = (a.getPx() * s1 + s4 * s2 - point.getPx() * s1) / (s3 * s2 - (b.getPx() - a.getPx()) * s1);
	Fixed w2 = (s4 - w1 * s3) / s1;
	return w1 >= 0 && w2 >= 0 && (w1 + w2) <= 1;
}

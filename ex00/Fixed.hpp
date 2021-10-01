/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calle <calle@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 16:58:17 by calle             #+#    #+#             */
/*   Updated: 2021/10/01 10:38:38 by calle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>

class Fixed {

	public:
		Fixed();
		Fixed( Fixed const & src );
		~Fixed();

		int	getRawBits( void ) const;
		void	setRawBits( int const raw );

		Fixed & operator=( Fixed const & rhs );
		
	private:
		int	_fixedPointValue;
		static const int _fractionalBits = 8;
};

std::ostream & operator<<( std::ostream & o, Fixed const & rhs );
#endif

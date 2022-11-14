/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cskipjac <cskipjac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 09:43:23 by cskipjac          #+#    #+#             */
/*   Updated: 2022/11/14 09:43:54 by cskipjac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int	_fp_value;
		static const int _fract_bits;

	public:
		Fixed();
		Fixed(const int input);
		Fixed(const float input);
		Fixed(const Fixed& copy);
		~Fixed();

		Fixed &operator=(const Fixed &src);

		float toFloat(void)const;
		int toInt(void)const;
		
		int getRawBits(void)const;
		void setRawBits(int const raw);
};

std::ostream	&operator<<(std::ostream &o, Fixed const &fixed);

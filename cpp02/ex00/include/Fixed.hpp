/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cskipjac <cskipjac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 03:03:21 by cskipjac          #+#    #+#             */
/*   Updated: 2022/11/14 03:04:07 by cskipjac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Fixed
{
	private:
		int	_fp_value;
		static const int _fract_bits;

	public:
		Fixed();
		Fixed(const Fixed& copy);

		~Fixed();

		Fixed &operator=(const Fixed &src);

		int getRawBits(void)const;
		void setRawBits(int const raw);
};

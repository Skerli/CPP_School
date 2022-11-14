/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cskipjac <cskipjac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 15:05:05 by cskipjac          #+#    #+#             */
/*   Updated: 2022/11/14 15:05:06 by cskipjac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once

// Includes
#include "WrongAnimal.hpp"

// classes

class WrongCat: public WrongAnimal
{
	private:
		// Private Members

	public:
	// Constructors
		WrongCat();
		WrongCat(const WrongCat &copy);

	// Deconstructors
		~WrongCat();

	// Overloaded Operators
		WrongCat &operator=(const WrongCat &src);

	// Public Methods
		void makeSound(void)const;
	// Getter

	// Setter

};

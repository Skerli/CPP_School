/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cskipjac <cskipjac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 15:04:57 by cskipjac          #+#    #+#             */
/*   Updated: 2022/11/14 15:04:58 by cskipjac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once

// Includes
#include "Animal.hpp"

// classes

class Dog: public Animal
{
	private:
		// Private Members

	public:
	// Constructors
		Dog();
		Dog(const Dog &copy);

	// Deconstructors
		~Dog();

	// Overloaded Operators
		Dog &operator=(const Dog &src);

	// Public Methods
		void makeSound(void)const;
	// Getter

	// Setter

};


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cskipjac <cskipjac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 15:04:49 by cskipjac          #+#    #+#             */
/*   Updated: 2022/11/14 15:04:50 by cskipjac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once

// Includes
#include "Animal.hpp"

// classes

class Cat: public Animal
{
	private:
		// Private Members

	public:
	// Constructors
		Cat();
		Cat(const Cat &copy);

	// Deconstructors
		~Cat();

	// Overloaded Operators
		Cat &operator=(const Cat &src);

	// Public Methods
		void makeSound(void)const;
	// Getter

	// Setter

};


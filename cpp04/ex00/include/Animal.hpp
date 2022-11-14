/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cskipjac <cskipjac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 15:04:53 by cskipjac          #+#    #+#             */
/*   Updated: 2022/11/14 15:04:54 by cskipjac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once

// Includes
#include <string>
#include <iostream>

// classes

class Animal
{
	protected:
		std::string _type;

	public:
	// Constructors
		Animal();
		Animal(const Animal &copy);

	// Deconstructors
		virtual ~Animal();

	// Overloaded Operators
		Animal &operator=(const Animal &src);

	// Public Methods
		virtual void makeSound(void)const;
	// Getter
		std::string getType(void)const;
	// Setter

};


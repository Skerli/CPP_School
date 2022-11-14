/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cskipjac <cskipjac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 15:05:01 by cskipjac          #+#    #+#             */
/*   Updated: 2022/11/14 15:05:02 by cskipjac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once

// Includes
#include <string>
#include <iostream>

// classes

class WrongAnimal
{
	protected:
		std::string _type;

	public:
	// Constructors
		WrongAnimal();
		WrongAnimal(const WrongAnimal &copy);

	// Deconstructors
		~WrongAnimal();

	// Overloaded Operators
		WrongAnimal &operator=(const WrongAnimal &src);

	// Public Methods
		void makeSound(void)const;
	// Getter
		std::string getType(void)const;
	// Setter

};


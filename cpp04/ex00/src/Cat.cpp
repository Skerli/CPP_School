/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cskipjac <cskipjac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 15:05:13 by cskipjac          #+#    #+#             */
/*   Updated: 2022/11/14 15:05:14 by cskipjac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Cat.hpp"

// Constructors
Cat::Cat(): Animal()
{
	this->_type = "Cat";
	std::cout << "Cat Default Constructor called" << std::endl;
}

Cat::Cat(const Cat &copy): Animal()
{
	std::cout << "Cat Copy Constructor called" << std::endl;
	*this = copy;
}

// Deconstructors
Cat::~Cat()
{
	std::cout << "Cat Deconstructor called" << std::endl;
}

// Overloaded Operators
Cat &Cat::operator=(const Cat &src)
{
	std::cout << "Cat Assignation operator called" << std::endl;
	if (this == &src)
		return *this;

	this->_type = src._type;
	return *this;
}

// Public Methods
void	Cat::makeSound(void)const
{
	std::cout << this->getType() << " says: **Meeeoow**" << std::endl;
}

// Getter

// Setter

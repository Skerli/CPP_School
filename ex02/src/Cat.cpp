/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cskipjac <cskipjac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 14:01:07 by cskipjac          #+#    #+#             */
/*   Updated: 2022/11/14 14:01:08 by cskipjac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Cat.hpp"


Cat::Cat(): Animal()
{
	this->_type = "Cat";
	std::cout << "Constructor Cat" << std::endl;
}

Cat::Cat(const Cat &copy): Animal()
{
	std::cout << "Copy Constructor Cat" << std::endl;
	*this = copy;
}

Cat::~Cat()
{
	std::cout << "Deconstructor Cat" << std::endl;
}

Cat &Cat::operator=(const Cat &src)
{
	std::cout << "Assignation operator Cat" << std::endl;
	if (this == &src)
		return *this;

	this->_type = src._type;
	return *this;
}

void	Cat::makeSound(void)const
{
	std::cout << this->getType() << " says: **Meeeoow**" << std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cskipjac <cskipjac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 13:51:56 by cskipjac          #+#    #+#             */
/*   Updated: 2022/11/14 13:53:32 by cskipjac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal()
{
	this->_type = "Dog";
	std::cout << "Constructor Dog" << std::endl;
}

Dog::Dog(const Dog &copy): Animal()
{
	std::cout << "opy Constructor Dog" << std::endl;
	*this = copy;
}

Dog::~Dog()
{
	std::cout << "Deconstructor Dog" << std::endl;
}

Dog &Dog::operator=(const Dog &src)
{
	std::cout << "Assignation operator Dog" << std::endl;
	if (this == &src)
		return *this;

	this->_type = src._type;
	return *this;
}

void	Dog::makeSound(void)const
{
	std::cout << this->getType() << " says: **GAV**" << std::endl;
}


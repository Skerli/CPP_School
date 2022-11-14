/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cskipjac <cskipjac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 13:48:11 by cskipjac          #+#    #+#             */
/*   Updated: 2022/11/14 14:46:35 by cskipjac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Animal.hpp"

Animal::Animal():_type("default")
{
	std::cout << "Constructor Animal" << std::endl;
}

Animal::Animal(const Animal &copy)
{
	std::cout << "Copy Constructor Animal " << std::endl;
	*this = copy;
}

Animal::~Animal()
{
	std::cout << "Deconstructor Animal" << std::endl;
}

Animal &Animal::operator=(const Animal &src)
{
	std::cout << "Assignation Animal" << std::endl;
	if (this == &src)
		return *this;

	this->_type = src._type;
	return *this;
}



std::string	Animal::getType(void)const
{
	return (this->_type);
}

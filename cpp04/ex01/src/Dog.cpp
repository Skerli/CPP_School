/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cskipjac <cskipjac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 14:26:24 by cskipjac          #+#    #+#             */
/*   Updated: 2022/11/14 14:27:13 by cskipjac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Dog.hpp"

Dog::Dog(): Animal()
{
	std::cout << "Dog Default Constructor called" << std::endl;
	this->_type = "Dog";
	this->_brain = new Brain();
	if (this->_brain == NULL)
	{
		perror("Dog Brain allocation failed");
		std::cerr << "Exiting the process now." << std::endl;
		exit(1);
	}
}

Dog::Dog(const Dog &copy): Animal()
{
	std::cout << "Dog Copy Constructor called" << std::endl;
	*this = copy;
}

Dog::~Dog()
{
	delete(this->_brain);
	std::cout << "Dog Deconstructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &src)
{
	std::cout << "Dog Assignation operator called" << std::endl;
	if (this == &src)
		return *this;

	this->_type = src._type;
	this->_brain = new Brain();
	if (this->_brain == NULL)
	{
		perror("Dog Brain allocation failed");
		std::cerr << "Exiting the process now." << std::endl;
		exit(1);
	}
	*this->_brain = *src._brain;
	return *this;
}

void	Dog::makeSound(void)const
{
	std::cout << this->getType() << " says: **Woof**" << std::endl;
}

void	Dog::getIdeas(void)const
{
	for (int i = 0; i < 3; i++)
		std::cout << "\tIdea " << i << " of the Dog is: \"" << this->_brain->getIdea(i) << "\" at the address " << this->_brain->getIdeaAddress(i) << std::endl;
}

void	Dog::setIdea(size_t i, std::string idea)
{
		this->_brain->setIdea(i, idea);
}

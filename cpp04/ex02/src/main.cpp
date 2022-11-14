/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cskipjac <cskipjac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 13:58:28 by cskipjac          #+#    #+#             */
/*   Updated: 2022/11/14 14:58:22 by cskipjac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{

	std::cout << "-------------------------------------------------------" << std::endl;

	std::cout << std::endl;
	std::cout << "\033[34mConstructing\033[0m" << std::endl;
	const Cat	*catto = new Cat();
	std::cout << std::endl;

	std::cout << "\033[34mTesting\033[0m" << std::endl;
	std::cout << "Cat _type: " << catto->getType() << std::endl;
	catto->makeSound();
	std::cout << std::endl;

	std::cout << "\033[34mDeconstructing\033[0m" << std::endl;
	delete catto;
	std::cout << std::endl;

	std::cout << "-------------------------------------------------------" << std::endl;

	std::cout << std::endl;
	std::cout << "\033[34mConstructing\033[0m" << std::endl;
	const Dog	*doggo = new Dog();
	std::cout << std::endl;
	std::cout << "\033[34mTesting\033[0m" << std::endl;
	std::cout << "Dog _type: " << doggo->getType() <<std::endl;
	doggo->makeSound();
	std::cout << std::endl;
	std::cout << "\033[34mDeconstructing\033[0m" << std::endl;
	delete doggo;
	std::cout << std::endl;

	std::cout << "-------------------------------------------------------" << std::endl;

	return (0);
}

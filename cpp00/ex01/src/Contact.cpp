/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   classes.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cskipjac <cskipjac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 20:05:54 by cskipjac          #+#    #+#             */
/*   Updated: 2022/11/13 20:26:23 by cskipjac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"


//Class Contact

Contact::Contact()
{

}

Contact::~Contact()
{

}

void	Contact::set_at()
{
	std::cout << "Vvedite first_name" << std::endl;
	std::cin >> first_name;

	std::cout << "Vvedite second_name" << std::endl;
	std::cin >> second_name;

	std::cout << "Vvedite nik" << std::endl;
	std::cin >> nik;

	std::cout << "Vvedite telephone" << std::endl;
	std::cin >> telephone;

	std::cout << "Vvedite enigma" << std::endl;
	std::cin >> enigma;
}

void	Contact::mod_at(std::string str)
{
	if (str.length() == 10)
	{
		std::cout << str;
	}
	if (str.length() < 10)
	{
		for (long unsigned int i = 0; i < 10 - str.length(); i++)
		{
			std::cout << " ";
		}
		std::cout << str;
	}
	if (str.length() > 10)
	{
		for (int i = 0; i < 10; i++)
		{
			std::cout << str[i];
			if (i == 8)
			{
				str[9] = '.';
			}
		}
	}
}

void	Contact::get_at(int in)
{
	std::cout << "|     index| ";
	std::cout << "|first_name| ";
	std::cout << "|secnd_name| ";
	std::cout << "|mynickname|\n";


	std::cout << "|         " << in << "| ";

	std::cout << "|";
	mod_at(first_name);
	std::cout << "| ";

	std::cout << "|";
	mod_at(second_name);
	std::cout << "| ";

	std::cout << "|";
	mod_at(nik);
	std::cout << "|\n";
}

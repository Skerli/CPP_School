/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cskipjac <cskipjac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 18:02:35 by cskipjac          #+#    #+#             */
/*   Updated: 2022/11/13 20:48:33 by cskipjac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

int	main()
{
	PhoneBook	MyBook;
	std::string	op;
	int			search_index;
	int			first;

	
	MyBook.index = 0;
	first = 0;
	
	while(1)
	{
		std::cout << "Vvedite op (ADD, SEARCH, EXIT)\n";
		std::cin  >> op;
		if (op == "ADD")
		{
			first = 1;
			if (MyBook.index == 7)
			{
				MyBook.index = 0;
			}
			MyBook.MyContacts[MyBook.index].set_at();
			MyBook.index++;
			MyBook.check_index++;
		}
		if (op == "SEARCH")
		{
			std::cout << "Vvedite index\n";
			std::cin  >> search_index;
			if (search_index >= 0 && search_index <= 10 && MyBook.ft_check_index(search_index)
					&& first != 0)
				MyBook.MyContacts[search_index].get_at(search_index);
			else
				std::cout << "Invalid index\n";
		}
		if (op == "EXIT")
		{
			std::cout << "Good Bye\n";
			break;
		}
	}
	
	return 0;
}
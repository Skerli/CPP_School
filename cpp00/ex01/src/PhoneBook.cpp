/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cskipjac <cskipjac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 20:31:12 by cskipjac          #+#    #+#             */
/*   Updated: 2022/11/13 20:42:42 by cskipjac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

//Class PhoneBook

PhoneBook::PhoneBook()
{
	check_index = 0;
}

PhoneBook::~PhoneBook()
{

}

int	PhoneBook::ft_check_index(int in)
{
	if (in > check_index)
		return 0;
	return 1;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cskipjac <cskipjac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 20:31:16 by cskipjac          #+#    #+#             */
/*   Updated: 2022/11/13 20:39:55 by cskipjac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Contact.hpp"

class PhoneBook 
{
public:
	PhoneBook();
	~PhoneBook();

	int	ft_check_index(int in);

	int		index;
	int		check_index;

	Contact	MyContacts[8];

};
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cskipjac <cskipjac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 01:13:00 by cskipjac          #+#    #+#             */
/*   Updated: 2022/11/14 01:13:01 by cskipjac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
	Harl HarlMessage;

	HarlMessage.complain("DEBUG");
	HarlMessage.complain("INFO");
	HarlMessage.complain("WARNING");
	HarlMessage.complain("ERROR");
}
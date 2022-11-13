/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cskipjac <cskipjac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 21:37:37 by cskipjac          #+#    #+#             */
/*   Updated: 2022/11/14 00:04:00 by cskipjac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie *zombie_one = newZombie("Nikita");
	Zombie *zombie_two = newZombie("Leonid");
	
	zombie_one->announcement();
	zombie_two->announcement();
	randomChump("Andrey");

	delete zombie_one;
	delete zombie_two;
}
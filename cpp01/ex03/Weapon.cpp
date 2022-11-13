/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cskipjac <cskipjac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 00:42:45 by cskipjac          #+#    #+#             */
/*   Updated: 2022/11/14 00:42:46 by cskipjac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() {}

Weapon::~Weapon() {}

Weapon::Weapon(const std::string weaponType)
{
	type = weaponType;
}

std::string &Weapon::getType()
{
	return (type);
}

void Weapon::setType(const std::string weaponType) 
{
	this->type = weaponType;
}
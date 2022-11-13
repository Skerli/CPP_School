/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cskipjac <cskipjac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 19:18:18 by cskipjac          #+#    #+#             */
/*   Updated: 2022/11/13 19:55:40 by cskipjac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <string>

class Contact 
{
public:
	Contact();
	~Contact();

	void	set_at();
	void	get_at(int index);
	void	mod_at(std::string str);


private:
	std::string	first_name;
	std::string	second_name;
	std::string	nik;
	std::string	telephone;
	std::string	enigma;
};
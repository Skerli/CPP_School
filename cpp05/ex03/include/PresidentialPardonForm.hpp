/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cskipjac <cskipjac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 16:04:54 by cskipjac          #+#    #+#             */
/*   Updated: 2022/11/14 16:04:55 by cskipjac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


// Header-protection
#pragma once

// Includes
#include <string>
#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

// classes

class Bureaucrat;

class From;

class PresidentialPardonForm: public Form
{
	private:
		const std::string _target;
	// moved the default Constructor to private because subject asks for orthodox canonical form
	// but also asks for the Forms to only have one constructor that takes one argument
		PresidentialPardonForm(void);
	public:
	// Constructors
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(PresidentialPardonForm &src);

	// Deconstructors
		~PresidentialPardonForm();

	// Overloaded Operators
		PresidentialPardonForm &operator=(const PresidentialPardonForm &src);

	// Public Methods
		void execute(Bureaucrat const &executor)const;
	// Getter
		std::string getTarget(void)const;
	// Setter

};

// // ostream Overload
std::ostream	&operator<<(std::ostream &o, PresidentialPardonForm *a);

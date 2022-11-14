/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cskipjac <cskipjac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 16:04:51 by cskipjac          #+#    #+#             */
/*   Updated: 2022/11/14 16:04:52 by cskipjac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


// Header-protection
#pragma once

// Includes
#include <string>
#include <iostream>
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

// classes

// class Form;
// class PresidentialPardonForm;
// class RobotomyRequestForm;
// class ShrubberyCreationForm;

class Intern
{
	private:
		// Private Members

	public:
	// Constructors
		Intern();
		Intern(const Intern &src);

	// Deconstructors
		~Intern();

	// Overloaded Operators
		Intern &operator=(const Intern &src);

	// Public Methods
		Form *makeForm(const std::string form, const std::string target);
	// Getter

	// Setter

};
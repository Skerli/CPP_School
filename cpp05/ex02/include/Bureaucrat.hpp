/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cskipjac <cskipjac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 16:02:21 by cskipjac          #+#    #+#             */
/*   Updated: 2022/11/14 16:02:22 by cskipjac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


// Header-protection
#pragma once

// Includes
#include <string>
#include <iostream>
#include "Form.hpp"

// classes

class Form;

class Bureaucrat
{
	private:
		const std::string _name;
		size_t _grade;
		// Setter
		void setGrade(int grade);

	public:
	// Constructors
		Bureaucrat();
		Bureaucrat(const Bureaucrat &src);
		Bureaucrat(int grade);
		Bureaucrat(const std::string name);
		Bureaucrat(const std::string name, int grade);

	// Deconstructors
		~Bureaucrat();

	// Overloaded Operators
		Bureaucrat &operator=(const Bureaucrat &src);

	// Public Methods
		void incrementGrade(void);
		void decrementGrade(void);
		void signForm(Form &form);
		void executeForm(Form &form)const;
	// Getter
		const std::string getName(void)const;
		size_t getGrade(void)const;

	//Exceptions
	class GradeTooLowException : public std::exception
	{
	public:
		virtual const char *what() const throw();
	};

	class GradeTooHighException : public std::exception
	{
	public:
		virtual const char *what() const throw();
	};
};

// ostream Overload
std::ostream	&operator<<(std::ostream &o, Bureaucrat *a);

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jetan <jetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 08:07:49 by jetan             #+#    #+#             */
/*   Updated: 2025/02/27 23:11:59 by jetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "PhoneBook.hpp"

//default constructor
Phonebook::Phonebook(): index(0)
{
}

//default destructor
Phonebook::~Phonebook()
{
}

void	Phonebook::ft_add(Contact contact)
{
	std::cout << "hello";
	if (this->index > 7)
		this->index = 0;
	contacts[this->index] = contact;
	this->index++;
}

void	Phonebook::ft_search()
{
	std::cout << std::setw(10) << "index" << "|";
	std::cout << std::setw(10) << "first name" << "|";
	std::cout << std::setw(10) << "last name" << "|";
	std::cout << std::setw(10) << "nickname" << "|" << std::endl;
	
	for (int i = 0; i < index; i++)
	{
		
		// std::cout << std::setw(10) << first_name << "|";
		// std::cout << std::setw(10) << last_name << "|";
		// std::cout << std::setw(10) << nickname << "|" << std::endl;
	}
}
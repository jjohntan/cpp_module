/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jetan <jetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 08:07:49 by jetan             #+#    #+#             */
/*   Updated: 2025/03/01 23:20:29 by jetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include "PhoneBook.hpp"

//default constructor
Phonebook::Phonebook(): index(0)
{
}

//default destructor
Phonebook::~Phonebook()
{
}
/**
 * @brief This function add contact
 */
void	Phonebook::ft_add(Contact contact)
{
	if (this->index > 7)
		this->index = 0;
	contacts[this->index] = contact;
	this->index++;
}

void	Phonebook::ft_search()
{
	if (this->index == 0)
	{
		std::cout << "The phonebook is empty" << std::endl;
		return;
	}
	std::cout << std::setw(10) << "index" << "|";
	std::cout << std::setw(10) << "first name" << "|";
	std::cout << std::setw(10) << "last name" << "|";
	std::cout << std::setw(10) << "nickname" << "|" << std::endl;
	
	for (int i = 0; i < 8; i++)
	{
		if (contacts[i].get_first_name().empty())
			continue;
		std::cout << std::setw(10) << i + 1 << "|";
		std::cout << std::setw(10) << truncated(contacts[i].get_first_name()) << "|";
		std::cout << std::setw(10) << truncated(contacts[i].get_last_name()) << "|";
		std::cout << std::setw(10) << truncated(contacts[i].get_nickname()) << "|" << std::endl;
	}
	// read index
	std::string input;
	int nb;
	std::cout << "index: ";
	std::getline(std::cin, input);
	
	nb = std::atoi(input.c_str());
	if (nb >= 1 && nb <= 8)
	{	// compare index
		if (contacts[nb - 1].get_first_name().empty())
		{
			std::cout << "HEllo" << std::endl;
			return ;
		}
		std::cout << "first name: " << contacts[nb - 1].get_first_name() << std::endl;
		std::cout << "last name: " << contacts[nb - 1].get_last_name() << std::endl;
		std::cout << "nickname: " << contacts[nb - 1].get_nickname() << std::endl;
		std::cout << "phone number: " << contacts[nb - 1].get_phone_number() << std::endl;
		std::cout << "darkest secret: " << contacts[nb - 1].get_darkest_secret() << std::endl;
	}
	else
		std::cout << "Invalid index" << std::endl;
}

std::string	truncated(std::string str)
{
	if (str.length() > 10)
	{
		str.resize(9);
		str.append(".");
	}
	return (str);
}
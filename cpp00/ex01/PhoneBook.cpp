/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jetan <jetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 08:07:49 by jetan             #+#    #+#             */
/*   Updated: 2025/02/28 22:36:37 by jetan            ###   ########.fr       */
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
	
	for (int i = 0; i < index; i++)
	{
		std::cout << std::setw(10) << i + 1 << "|";
		std::cout << std::setw(10) << contacts[i].get_first_name() << "|";
		std::cout << std::setw(10) << contacts[i].get_last_name() << "|";
		std::cout << std::setw(10) << contacts[i].get_nickname() << "|" << std::endl;
	}
	// read index
	std::string input;
	int nb;
	std::cout << "index: ";
	std::getline(std::cin, input);
	
	nb = atoi(input.c_str());
	if (nb == index)
	{	// compare index
		std::cout << "first name: " << truncated(contacts[nb - 1].get_first_name()) << std::endl;
		std::cout << "last name: " << truncated(contacts[nb - 1].get_last_name()) << std::endl;
		std::cout << "nickname: " << truncated(contacts[nb - 1].get_nickname()) << std::endl;
		std::cout << "phone number: " << truncated(contacts[nb - 1].get_phone_number()) << std::endl;
		std::cout << "darkest secret: " << truncated(contacts[nb - 1].get_darkest_secret()) << std::endl;
	}
	else
		std::cout << "Invalid index" << std::endl;
}

std::string	truncated(std::string str)
{
	return (str);
}
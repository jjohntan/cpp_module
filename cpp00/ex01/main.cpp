/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jetan <jetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 08:03:30 by jetan             #+#    #+#             */
/*   Updated: 2025/02/28 21:58:58 by jetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "PhoneBook.hpp"
#include "Contact.hpp"

void	ft_info(Contact &contact)
{
	std::string input;
	
	// std::cout << "First name: ";
	// std::getline(std::cin, input);
	// contact.set_first_name(input);
	// std::cout << "Last name: ";
	// std::getline(std::cin, input);
	// contact.set_last_name(input);
	// std::cout << "Nickname: ";
	// std::getline(std::cin, input);
	// contact.set_nickname(input);
	// std::cout << "Phone number: ";
	// std::getline(std::cin, input);
	// contact.set_phone_number(input);
	// std::cout << "Darkest secrect: ";
	// std::getline(std::cin, input);
	// contact.set_darkest_secret(input);
	while (1)
	{
		std::cout << "First name: ";
		std::getline(std::cin, input);
		if (std::cin.eof())
		{
			exit(0);
		}
		else
		{
			if (input.empty())
			{
				std::cout << "wrong" << std::endl; //custom your self
				continue;
			}
			else
			{
				contact.set_first_name(input);
				break;
			}
		}
	}
	while (1)
	{
		std::cout << "Last name: ";
		std::getline(std::cin, input);
		if (std::cin.eof())
		{
			exit(0);
		}
		else
		{
			if (input.empty())
				continue;
			else
			{
				contact.set_last_name(input);
				break;
			}
		}
	}
	while (1)
	{
		std::cout << "Nick name: ";
		std::getline(std::cin, input);
		if (std::cin.eof())
		{
			exit(0);
		}
		else
		{
			if (input.empty())
				continue;
			else
			{
				contact.set_nickname(input);
				break;
			}
		}
	}
	while (1)
	{
		std::cout << "Phone number: ";
		std::getline(std::cin, input);
		if (std::cin.eof())
		{
			exit(0);
		}
		else
		{
			if (input.empty())
				continue;
			else
			{
				contact.set_phone_number(input);
				break;
			}
		}
	}
	while (1)
	{
		std::cout << "Dark secret: ";
		std::getline(std::cin, input);
		if (std::cin.eof())
		{
			exit(0);
		}
		else
		{
			if (input.empty())
				continue;
			else
			{
				contact.set_darkest_secret(input);
				break;
			}
		}
	}
	
}

int main()
{
	Phonebook phonebook;//object
	Contact	new_contact;//object
	std::string command;
	
	while (true)
	{
		std::cout << "Enter (ADD, SEARCH, EXIT): ";
		std::getline(std::cin, command);
		if (std::cin.eof())
			break;
		if (command == "ADD")
		{
			ft_info(new_contact);
			phonebook.ft_add(new_contact);
		}
		else if (command == "SEARCH")
			phonebook.ft_search();
		else if (command == "EXIT")
			break;
		else
			std::cout << "Invalid command" << std::endl;
	}
}

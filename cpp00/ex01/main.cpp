/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jetan <jetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 08:03:30 by jetan             #+#    #+#             */
/*   Updated: 2025/02/27 19:06:35 by jetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "PhoneBook.hpp"
#include "Contact.hpp"

void	info(Contact &contact)
{
	std::string input;
	
	std::cout << "First name: ";
	std::cin >> input;
	contact.set_first_name(input);
	std::cout << "Last name: ";
	std::cin >> input;
	contact.set_first_name(input);
	std::cout << "Nickname: ";
	std::cin >> input;
	contact.set_first_name(input);
	std::cout << "Phone number: ";
	std::cin >> input;
	contact.set_first_name(input);
	std::cout << "Darkest secrect: ";
	std::cin >> input;
	contact.set_first_name(input);
}

int main()
{
	Phonebook phonebook;
	Contact	new_contact;//object
	std::string command;
	
	while (true)
	{
		std::cout << "Enter (ADD, SEARCH, EXIT): ";
		std::getline(std::cin, command);
		if (command == "ADD")
		{
			info(new_contact);
			break;
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

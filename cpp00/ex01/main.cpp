/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jetan <jetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 17:01:12 by jetan             #+#    #+#             */
/*   Updated: 2025/01/08 17:13:17y jetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"
#include "Contact.hpp"

int main(void)
{
	Phonebook	phonebook;
	std::string	input;
	
	while (input != "EXIT")
	{
		std::cin >> input;
		std::cout << ">";
		if (input == "ADD")
			std::cout << "ADD";
		else if (input == "SEARCH")
			std::cout << "SEARCH";
	}
	return (0);
}
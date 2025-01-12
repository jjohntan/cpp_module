/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jetan <jetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 17:01:12 by jetan             #+#    #+#             */
/*   Updated: 2025/01/09 18:56:46 by jetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "PhoneBook.hpp"
#include "Contact.hpp"

int main(void){
	Phonebook	phonebook;
	std::string	input;
	
	while (input != "EXIT"){
		// std::cout << ">";
		std::getline(std::cin, input);//
		if (input == "ADD"){
			phonebook.add();
		}
		else if (input == "SEARCH"){
			std::cout << "SEARCH";
		}
	}
	return (0);
}
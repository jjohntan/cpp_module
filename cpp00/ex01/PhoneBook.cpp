/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jetan <jetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 22:18:58 by jetan             #+#    #+#             */
/*   Updated: 2025/01/10 20:35:10 by jetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>

void	Phonebook::add(void)
{
	Contact tmp_contact;
	
	if (this->index > 7)
		index = 0;
	/*std::cout << "Enter first name";*/
	contact[this->index]= tmp_contact;//store into contact
	this ->index++;
	std::cout << "Contact saved successfully";
}

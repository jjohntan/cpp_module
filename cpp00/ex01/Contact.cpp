/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jetan <jetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 08:11:01 by jetan             #+#    #+#             */
/*   Updated: 2025/03/01 18:24:59 by jetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

//default constructor
Contact::Contact()
{
}

//default destructor
Contact::~Contact()
{
}

//setter function
void	Contact::set_first_name(std::string str)
{
	this->first_name = str;
}

void	Contact::set_last_name(std::string str)
{
	this->last_name = str;
}

void	Contact::set_nickname(std::string str)
{
	this->nickname = str;
}

void	Contact::set_phone_number(std::string str)
{
	this->phone_number = str;
}

void	Contact::set_darkest_secret(std::string str)
{
	this->darkest_secret = str;
}

//getter function
std::string Contact::get_first_name(){ return first_name; }
std::string Contact::get_last_name(){ return last_name; }
std::string Contact::get_nickname(){ return nickname; }
std::string Contact::get_phone_number(){ return phone_number; }
std::string Contact::get_darkest_secret(){ return darkest_secret; }
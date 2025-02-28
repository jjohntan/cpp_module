/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jetan <jetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 08:04:45 by jetan             #+#    #+#             */
/*   Updated: 2025/02/28 22:39:05 by jetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class Phonebook
{
	private:
		Contact	contacts[8];//array
		int		index;
	
	public:
		Phonebook();//default constructor
		~Phonebook();//default destructor
	
	void	ft_add(Contact contact);
	void	ft_search();
	void	ft_display_contact();
	void	ft_display_info();
};

std::string	truncated(std::string str);

# endif

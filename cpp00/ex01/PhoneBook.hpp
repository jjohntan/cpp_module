/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jetan <jetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 08:04:45 by jetan             #+#    #+#             */
/*   Updated: 2025/02/27 19:08:29 by jetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class Phonebook
{
	private:
		Contact	contacts[8];
		int		index;
	
	public:
		Phonebook();//default constructor
		~Phonebook();//default destructor
	
	void	ft_add(Contact contact);
	void	ft_search();
};

# endif

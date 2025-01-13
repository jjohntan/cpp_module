/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jetan <jetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 17:02:16 by jetan             #+#    #+#             */
/*   Updated: 2025/01/09 16:41:42 by jetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>

class Contact{
	private:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;
	public:
		void	set_first_name(std::string name);
		void	set_last_name(std::string name);
		void	set_nickname(std::string nick);
		void	set_phone_number(std::string number);
		void	set_darkest_secrect(std::string secret);
};


#endif

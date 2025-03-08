/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jetan <jetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 16:15:24 by jetan             #+#    #+#             */
/*   Updated: 2025/03/08 21:20:34 by jetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

#include <iostream>

Zombie::Zombie(std::string name): name(name)
{
	std::cout << "hello" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << name << ": destroyed " << std::endl;
}
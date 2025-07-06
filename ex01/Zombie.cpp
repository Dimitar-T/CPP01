/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtrendaf <dtrendaf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 14:03:09 by dtrendaf          #+#    #+#             */
/*   Updated: 2025/07/06 15:44:13 by dtrendaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
/// @brief the constructor has to be the same name as the Class, it is used to init the name of the Zombies, : name("")
/// is faster then going inside the boddy and changing it there;
Zombie::Zombie() : name("") {}

void Zombie::announce()
{
	std::cout << name <<  ": BraiiiiiiinnnzzzZ..." << std::endl;
}
void Zombie::setName(std::string input)
{
	name = input;
}
Zombie::Zombie(std::string name) : name(name)
{
	std::cout << "Zombie " << name << " created." << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Zombie " << name << " destroyed." << std::endl;
}
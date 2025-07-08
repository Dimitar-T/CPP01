/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtrendaf <dtrendaf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 12:49:40 by dtrendaf          #+#    #+#             */
/*   Updated: 2025/07/08 17:16:16 by dtrendaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanB.hpp"


HumanB::HumanB(const std::string name): name(name), weapon(nullptr) {};

void HumanB::setWeapon(Weapon &get_weapon)
{
	weapon = &get_weapon;
}

void HumanB::attack()
{
	if (weapon)
		std::cout << name << " attacks with their " << weapon->getType() << std::endl;
	else 
		std::cout << name << " has no weapon to attack with!" << std::endl;
		
}
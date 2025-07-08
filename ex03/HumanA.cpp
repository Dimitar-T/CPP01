/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtrendaf <dtrendaf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 11:53:33 by dtrendaf          #+#    #+#             */
/*   Updated: 2025/07/08 17:22:00 by dtrendaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"

HumanA::HumanA(const std::string name, Weapon &weapon): name(name) , weapon(weapon) {}; 

void HumanA::attack()
{
	std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}
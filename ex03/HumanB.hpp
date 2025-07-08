/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtrendaf <dtrendaf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 11:53:20 by dtrendaf          #+#    #+#             */
/*   Updated: 2025/07/08 17:16:23 by dtrendaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
class HumanB
{
private:
	std::string name;
	Weapon *weapon;
public:
	HumanB(const std::string name);
	void setWeapon(Weapon &get_weapon);
	void attack(void);
};

#endif
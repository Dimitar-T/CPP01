/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtrendaf <dtrendaf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 12:40:20 by dtrendaf          #+#    #+#             */
/*   Updated: 2025/07/08 17:21:48 by dtrendaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
#include <iostream> 

class HumanA
{
private:
	std::string name;
	Weapon &weapon;
public:
	HumanA(const std::string name, Weapon &wepon);
	void attack(void);
};

#endif
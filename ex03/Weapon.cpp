/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtrendaf <dtrendaf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 12:19:55 by dtrendaf          #+#    #+#             */
/*   Updated: 2025/07/08 12:46:25 by dtrendaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"


Weapon::Weapon(const std::string &type) : type(type) {};

const std::string &Weapon::getType() const
{
	return (type);
}

void Weapon::setType(const std::string new_value)
{
	type = new_value;
}
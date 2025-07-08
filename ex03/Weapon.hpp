/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtrendaf <dtrendaf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 11:53:29 by dtrendaf          #+#    #+#             */
/*   Updated: 2025/07/08 12:34:56 by dtrendaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream> 
#include <iomanip>

class Weapon
{
private:
	std::string type;
public:
	Weapon(const std::string &type);
	const std::string &getType() const;
	void setType(const std::string new_value);
};


#endif
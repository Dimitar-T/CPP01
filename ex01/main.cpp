/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtrendaf <dtrendaf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 13:44:59 by dtrendaf          #+#    #+#             */
/*   Updated: 2025/07/06 15:49:04 by dtrendaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie *horde = zombieHorde(5 , "pedal");
	for (size_t i = 0; i < 5; i++)
	{
		horde[i].announce();
	}
	delete[] horde;
}
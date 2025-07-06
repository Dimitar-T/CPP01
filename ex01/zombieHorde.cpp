/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtrendaf <dtrendaf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 18:03:16 by dtrendaf          #+#    #+#             */
/*   Updated: 2025/07/06 15:43:38 by dtrendaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name)
{
	if (N <= 0)
		return(NULL);
	Zombie *horde = new Zombie[N];
	for (size_t i = 0; i < N; i++)
	{
		horde[i].setName(name);
	}
	return (horde);
}
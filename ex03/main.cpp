/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtrendaf <dtrendaf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 11:53:25 by dtrendaf          #+#    #+#             */
/*   Updated: 2025/07/08 17:32:01 by dtrendaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

// int main()
// {
// 	Weapon hui = Weapon("Yommus Ghostblade");
// 	Weapon hui2 = Weapon("9mm Glock");
// 	HumanA pencho = HumanA("Talon", hui);
// 	HumanB guzeta = HumanB("Bashtata");
// 	pencho.attack();
// 	guzeta.attack();
// 	guzeta.setWeapon(hui2);
// 	guzeta.attack();
// 	std::cout << hui.getType() << std::endl;
// 	std::cout << hui2.getType() << std::endl;
// }

int	main(void)
{
	Weapon club = Weapon("crude spiked club");
	HumanA bob("Bob", club);
	bob.attack();
	club.setType("some other type of club");
	bob.attack();
	Weapon club = Weapon("crude spiked club");
	HumanB jim("Jim");
	jim.setWeapon(club);
	jim.attack();
	club.setType("some other type of club");
	jim.attack();
	return (0);
}
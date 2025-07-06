/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtrendaf <dtrendaf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 14:00:34 by dtrendaf          #+#    #+#             */
/*   Updated: 2025/07/06 15:43:16 by dtrendaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iomanip>
# include <iostream>
#include <unistd.h>

class Zombie
{
  private:
	std::string name;

  public:
  	Zombie();
	void setName(std::string input);
  	Zombie(std::string name);
	~Zombie(); 
	void announce(void);
};

Zombie* newZombie(std::string name);
Zombie* zombieHorde( int N, std::string name);

#endif
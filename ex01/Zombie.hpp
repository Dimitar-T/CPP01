/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtrendaf <dtrendaf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 14:00:34 by dtrendaf          #+#    #+#             */
/*   Updated: 2025/07/05 15:24:56 by dtrendaf         ###   ########.fr       */
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
  	Zombie(std::string name);
	~Zombie(); 
	void announce(void);
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif
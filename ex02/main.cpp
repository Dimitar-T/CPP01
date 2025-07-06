/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtrendaf <dtrendaf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 15:49:54 by dtrendaf          #+#    #+#             */
/*   Updated: 2025/07/06 15:59:10 by dtrendaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iomanip>
# include <iostream>

int main(void)
{
	std::string msg = "HI THIS IS BRAIN";
	std::string *stringPTR = &msg;
	std::string &stringREF = msg;

    std::cout << "Address of msg     : " << &msg << std::endl;
    std::cout << "Address held by PTR  : " << stringPTR << std::endl;
    std::cout << "Address held by REF  : " << &stringREF << std::endl;

    std::cout << "Value of brain       : " << msg << std::endl;
    std::cout << "Value pointed by PTR : " << *stringPTR << std::endl;
    std::cout << "Value via REF        : " << stringREF << std::endl;

}
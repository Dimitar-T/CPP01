/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtrendaf <dtrendaf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 17:46:03 by dtrendaf          #+#    #+#             */
/*   Updated: 2025/07/08 20:22:27 by dtrendaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iomanip>
#include <iostream> 
#include <fstream>

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "Error wrong number of arguments!\nUsage: ./trace_replace <filename> / string s1 (to be found) / string s2 (replaces every s1)" << std::endl;
		return (1);
	}
	if (std::string(argv[2]).empty() || std::string(argv[2]).empty())
	{
		std::cerr << "Error: s1 or s2 is an empty string!" << std::endl;
		return (1);		
	}
	std::ifstream input(argv[1]);
	if (!input)
	{
		std::cerr << "Error cannot open the file: " << argv[1] << std::endl;
		return (1);		
	}
	std::ofstream output(std::string(argv[1]) + ".replace");
	if (!output)
	{
		std::cerr << "Error cannot create the file: " << std::string(argv[1]) + ".replace" << std::endl;
		return (1);		
	}
	std::string line; 
	std::getline (input, line);
	while (input)
	{
		std::size_t found = line.find(argv[2]);
		if (found != -1)
		{
			line.erase(found, std::string(argv[2]).size());
			line.insert(found, argv[3]);
		}
		output << line;
		if (std::getline (input, line))
			output << std::endl;
		if (input.eof() && line.empty())
			output << std::endl;
	}
	
	return (0);
}
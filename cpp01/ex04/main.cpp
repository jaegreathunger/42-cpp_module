/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <jaeshin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 13:37:43 by jaeshin           #+#    #+#             */
/*   Updated: 2023/10/08 14:11:01 by jaeshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int	main(int argc, char **argv)
{
	if (argc == 4)
	{
		std::string	fileName = argv[1];
		size_t		pos = fileName.find(".");
		std::string	pureFileName;
		if (pos != 0)
			pureFileName = fileName.substr(0, pos);
		else
			pureFileName = fileName;
		std::ifstream	inputFile(fileName);
		if (!inputFile)
		{
			std::cerr << "Failed to open the input file." << std::endl;
			return (1);
		}
		std::string	outfileName = pureFileName + ".replace";
		std::ofstream	outputFile(outfileName);
		if (!outputFile)
		{
			std::cerr << "Failed to open the output file." << std::endl;
			return (1);
		}
		std::string	line;
		while (std::getline(inputFile, line))
		{
			outputFile << line << std::endl;
		}
		inputFile.close();
		outputFile.close();
		return (0);
	}
	std::cout << "Wrong input" << std::endl;
	return (1);
}

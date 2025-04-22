/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryabuki <ryabuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 16:51:09 by ryabuki           #+#    #+#             */
/*   Updated: 2025/04/22 17:25:34 by ryabuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>

int	main(void)
{
	PhoneBook	PhoneBook;
	std::string	input;

	while (1)
	{
		std::cout << "Enter command : [ADD, SEARCH, EXIT]" << std::endl;
		std::getline(std::cin, input);
		if (input == "ADD")
		{

		}
		else if (input == "SEARCH")
		{
			
		}
		else if (input == "EXIT")
		{
			
		}
		else
		{
			std::cout << "input is invalid!" << std::endl;
		}
	}
}
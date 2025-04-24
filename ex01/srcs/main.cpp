/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabukirento <yabukirento@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 16:51:09 by ryabuki           #+#    #+#             */
/*   Updated: 2025/04/24 15:01:12 by yabukirento      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

int	main(void)
{
	PhoneBook	phoneBook;
	std::string	input;

	while (1)
	{
		std::cout << "Enter command : [ADD, SEARCH, EXIT]" << std::endl;
		if (!std::getline(std::cin, input))
			break ;
		if (input == "ADD")
		{
			phoneBook.ft_add_phonebook();
		}
		else if (input == "SEARCH")
		{
			phoneBook.ft_get_phonebook();
		}
		else if (input == "EXIT")
		{
			break ;
		}
		else
		{
			std::cout << "input is invalid!" << std::endl;
		}
	}
	return (EXIT_SUCCESS);
}

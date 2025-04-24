/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabukirento <yabukirento@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 17:07:04 by ryabuki           #+#    #+#             */
/*   Updated: 2025/04/24 15:16:14 by yabukirento      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void) {}

Contact::~Contact(void) {}

Contact::Contact(const Contact& other) {
	for (int i = 0; i < FIELD_COUNT; ++i) {
		this->contact_fields[i] = other.contact_fields[i];
	}
}

Contact& Contact::operator=(const Contact& rhs) {
	if (this != &rhs) {
		for (int i = 0; i < FIELD_COUNT; ++i) {
			this->contact_fields[i] = rhs.contact_fields[i];
		}
	}
	return (*this);
}

void Contact::ft_create_contact_from_input()
{
	static const std::string prompts[FIELD_COUNT] = {
		"First name", "Last name", "Nickname", "Phone number", "Darkest secret"
	};

	std::string input;
	for (int i = 0; i < FIELD_COUNT; ++i)
	{
		do {
			std::cout << prompts[i] << ": ";
			if (!std::getline(std::cin, input)) {
				std::cerr << "Input error. Aborting." << std::endl;
				return;
			}
		} while (input.empty());

		contact_fields[i] = input;
	}
}

std::string Contact::ft_get_field(int field) const
{
	if (field >= 0 && field < FIELD_COUNT)
		return contact_fields[field];
	else
		return ("");
}

std::string	Contact::ft_print_format(std::string str)
{
	if (str.length() > 10)
		return (str.substr(0,9) + ".");
	else
		return (str);
}

void Contact::ft_get_contact(int index)
{
	std::cout << "|" << std::setw(10) << index << "|";

	for (int i = FIRST_NAME; i <= NICK_NAME; ++i)
	{
		std::cout << std::setw(10) << ft_print_format(contact_fields[i]) << "|";
	}
	std::cout << std::endl;
}


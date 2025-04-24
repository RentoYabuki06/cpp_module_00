/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabukirento <yabukirento@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 16:09:40 by ryabuki           #+#    #+#             */
/*   Updated: 2025/04/24 15:10:30 by yabukirento      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : _index(0), _full(false) {}

PhoneBook::PhoneBook(const PhoneBook& other) {
	this->_index = other._index;
	this->_full = other._full;
	for (int i = 0; i < 8; i++) {
		this->_contacts[i] = other._contacts[i];
	}
}

PhoneBook& PhoneBook::operator=(const PhoneBook& rhs) {
	if (this != &rhs)
	{
		this->_index = rhs._index;
		this->_full = rhs._full;
		for (int i = 0; i < 8; i++) {
			this->_contacts[i] = rhs._contacts[i];
		}
	}
	return (*this);
}

PhoneBook::~PhoneBook() {}

void PhoneBook::ft_add_phonebook()
{
	std::cout << "Adding a new contact...\n";
	this->_contacts[this->_index].ft_create_contact_from_input();

	this->_index = (this->_index + 1) % 8;
	if (this->_index == 0)
		this->_full = true;
}

void PhoneBook::ft_get_phonebook()
{
	if (_index == 0 && !_full) {
		std::cout << "No contacts saved yet." << std::endl;
		return;
	}

	std::cout << "|-------------------------------------------|" << std::endl;
	std::cout << "|     Index|First Name| Last Name| Nickname |" << std::endl;
	std::cout << "|-------------------------------------------|" << std::endl;

	int count = _full ? 8 : _index;
	for (int i = 0; i < count; ++i)
		_contacts[i].ft_get_contact(i);

	std::cout << "Enter index to view details: ";
	std::string input;
	std::getline(std::cin, input);

	if (input.length() != 1 || !std::isdigit(input[0])) {
		std::cout << "Invalid input. Index must be a digit [0-7]." << std::endl;
		return;
	}

	int idx = input[0] - '0';
	if (!_full && idx >= _index) {
		std::cout << "No contact at that index." << std::endl;
		return;
	}
	if (_full && idx >= 8) {
		std::cout << "Index out of range." << std::endl;
		return;
	}

	std::cout << "First name:     " << _contacts[idx].ft_get_field(Contact::FIRST_NAME) << std::endl;
	std::cout << "Last name:      " << _contacts[idx].ft_get_field(Contact::LAST_NAME) << std::endl;
	std::cout << "Nickname:       " << _contacts[idx].ft_get_field(Contact::NICK_NAME) << std::endl;
	std::cout << "Phone number:   " << _contacts[idx].ft_get_field(Contact::PHONE_NUMBER) << std::endl;
	std::cout << "Darkest secret: " << _contacts[idx].ft_get_field(Contact::DARKEST_SECRET) << std::endl;
}

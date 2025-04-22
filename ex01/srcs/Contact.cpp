/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryabuki <ryabuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 17:07:04 by ryabuki           #+#    #+#             */
/*   Updated: 2025/04/22 18:49:23 by ryabuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
	this->_first_name = "";
	this->_last_name = "";
	this->_nick_name = "";
	this->_phone_number = "";
	this->_darkest_secret = "";
}

Contact::~Contact(void)
{
	return ;
}

void Contact::ft_set_firstname(const std::string& str)
{
	this->_first_name = str;
}

void Contact::ft_set_lastname(const std::string& str)
{
	this->_last_name = str;
}

void Contact::ft_set_phonenumber(const std::string& str)
{
	this->_phone_number = str;
}

void Contact::ft_set_darksetsecret(const std::string& str)
{
	this->_darkest_secret = str;
}

void	Contact::ft_create_contact_from_input()
{
	Contact		new_contact;
	std::string	input;

	std::cout << "First name: ";
	std::getline(std::cin, input);
	new_contact.ft_set_firstname(input);
}

std::string	Contact::ft_print_format(std::string str)
{
	if (str.length() > 10)
		return (str.substr(0,9) + ".");
	else
		return (str);
}

void	Contact::ft_get_contact(int index)
{
	std::cout << "|";
	std::cout << std::setw(10) << index << "|";
	std::cout << std::setw(10) << ft_print_format(this->_first_name) << "|";
	std::cout << std::setw(10) << ft_print_format(this->_last_name) << "|";
	std::cout << std::setw(10) << ft_print_format(this->_nick_name) << "|";
}
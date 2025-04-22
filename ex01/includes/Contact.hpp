/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryabuki <ryabuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 16:41:48 by ryabuki           #+#    #+#             */
/*   Updated: 2025/04/22 18:49:14 by ryabuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>
#include <iostream>
#include <iomanip>

class Contact {
private:
	std::string	_first_name;
	std::string	_last_name;
	std::string	_nick_name;
	std::string	_phone_number;
	std::string	_darkest_secret;

public:
	Contact(void);
	Contact(const Contact& other);
	Contact& operator = (const Contact& rhs);
	~Contact(void);

	void		ft_create_contact_from_input();
	void		ft_get_contact(int index);
	std::string	ft_print_format(std::string str);
	void		ft_set_firstname(const std::string& str);
	void		ft_set_lastname(const std::string& str);
	void		ft_set_phonenumber(const std::string& str);
	void		ft_set_darksetsecret(const std::string& str);
};

#endif
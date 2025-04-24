/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabukirento <yabukirento@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 16:41:48 by ryabuki           #+#    #+#             */
/*   Updated: 2025/04/24 15:16:18 by yabukirento      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>
#include <iostream>
#include <iomanip>

class Contact {
public:
	enum ContactField
	{
		FIRST_NAME,
		LAST_NAME,
		NICK_NAME,
		PHONE_NUMBER,
		DARKEST_SECRET,
		FIELD_COUNT
	};

private:
	std::string	contact_fields[FIELD_COUNT];

public:
	Contact(void);
	Contact(const Contact& other);
	Contact& operator=(const Contact& rhs);
	~Contact(void);

	void		ft_create_contact_from_input();
	void		ft_get_contact(int index);
	std::string	ft_print_format(std::string str);
	std::string ft_get_field(int field) const;
};

#endif
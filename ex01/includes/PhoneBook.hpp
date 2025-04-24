/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabukirento <yabukirento@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 16:10:03 by ryabuki           #+#    #+#             */
/*   Updated: 2025/04/24 15:01:18 by yabukirento      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook {
private:
	Contact	_contacts[8];
	int		_index;
	bool	_full;

public:
	PhoneBook(void);
	PhoneBook(const PhoneBook& other);
	PhoneBook& operator = (const PhoneBook& rhs);
	~PhoneBook(void);
	
	void	ft_add_phonebook(void);
	void	ft_get_phonebook(void);
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejia <amejia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 22:33:58 by amejia            #+#    #+#             */
/*   Updated: 2023/05/28 23:48:19 by amejia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

class PhoneBook{
	private:
		Contact contacts[8];
	public:
		PhoneBook();
		~PhoneBook();
		void AddContact();
		void AddContact(int id, std::string first_name, std::string last_name, 
			std::string nickname);
		void Search();
		void Search(int idn);
};
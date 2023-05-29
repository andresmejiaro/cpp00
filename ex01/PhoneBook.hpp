/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejia <amejia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 22:33:58 by amejia            #+#    #+#             */
/*   Updated: 2023/05/29 22:47:27 by amejia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

#ifndef PhoneBook_hpp
# define PhoneBook_hpp

class PhoneBook{
	private:
		Contact contacts[8];
	public:
		PhoneBook();
		~PhoneBook();
		void AddContact();
		void AddContact(std::string first_name, std::string last_name, 
			std::string nickname, unsigned int phone_n, 
			std::string darkest_secret);
		void Search();
		void Search(int idn);
};

#endif
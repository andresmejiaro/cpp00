/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejia <amejia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 22:48:07 by amejia            #+#    #+#             */
/*   Updated: 2023/06/01 20:42:41 by amejia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <cstdlib>

#ifndef CONTACT_HPP
# define CONTACT_HPP

class Contact{
	private:
		std::string			first_name;
		std::string			last_name;
		std::string			nickname;
		unsigned int		phone_number;
		std::string			darkest_secret;
		int					init;
		static std::string 	scaleto10(std::string str);
	public:
		Contact();
		~Contact();
		void	update_contact(std::string first_name, std::string last_name, 
			std::string nickname, unsigned int phone_number, 
			std::string darkest_secret);
		void	print();
		void	printline(int id);
		int		get_init();
};

#endif

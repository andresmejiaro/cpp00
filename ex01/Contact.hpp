/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejia <amejia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 22:48:07 by amejia            #+#    #+#             */
/*   Updated: 2023/05/28 23:30:09 by amejia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

class Contact{
	private:
		int			id;
		std::string	first_name;
		std::string	last_name;
		std::string	nickmame;

	public:
		Contact();
		~Contact();
		void update_contact(int id, std::string first_name, std::string last_name, 
			std::string nickname);
};


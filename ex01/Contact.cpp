/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejia <amejia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 22:47:38 by amejia            #+#    #+#             */
/*   Updated: 2023/05/29 22:45:58 by amejia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(){
	first_name = "";
	last_name = "";
	nickname = "";
	phone_number = 0;
	darkest_secret = "";
	init = -1;
}

void Contact::update_contact(std::string nfirst_name, std::string nlast_name, 
			std::string nnickname, unsigned int nphone_number, 
			std::string ndarkest_secret){
	first_name = nfirst_name;
	last_name = nlast_name;
	nickname = nnickname;
	phone_number = nphone_number;
	darkest_secret = ndarkest_secret;
	init = 1;
}


Contact::~Contact(){
	
}

void Contact::printline(int id){
	if (init != -1)
		std::cout <<  id << "|" << first_name << "|" << last_name << "|" << 
		nickname  << std::endl;
}

void Contact::print(){
	std::cout << "|" << first_name << std::endl;
	std::cout << "|" << last_name << std::endl;
	std::cout << "|" << nickname << std::endl;
	std::cout << "|" << phone_number << std::endl;
	std::cout << "|" << darkest_secret << std::endl;
}
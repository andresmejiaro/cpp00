/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejia <amejia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 22:47:38 by amejia            #+#    #+#             */
/*   Updated: 2023/05/30 11:42:10 by amejia           ###   ########.fr       */
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
		std::cout <<  id << "\t|" << first_name.substr(0,4) +"." << "\t|" << 
		last_name.substr(0,4) +"." << "\t|" << nickname.substr(0,4) +"."  <<
		std::endl;
}

void Contact::print(){
	std::cout << "First Name: " << first_name << std::endl;
	std::cout << "Last Name: " << last_name << std::endl;
	std::cout << "Nickname: " << nickname << std::endl;
	std::cout << "Phone Number: " << phone_number << std::endl;
	std::cout << "Darkest Secret: " << darkest_secret << std::endl;
}

int Contact::get_init(){
	return (init);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejia <amejia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 23:07:28 by amejia            #+#    #+#             */
/*   Updated: 2023/05/29 22:49:37 by amejia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"


PhoneBook::PhoneBook(){
	
}

PhoneBook::~PhoneBook(){
	
}

void PhoneBook::AddContact(){
	std::string		data[5];
	unsigned int	phone_n;

	std::cout << "Enter Name: " << std::endl;
	std::getline(std::cin, data[0]);
	std::cout << "Enter Last Name: " << std::endl;
	std::getline(std::cin, data[1]);
	std::cout << "Enter Nickname: " << std::endl;
	std::getline(std::cin, data[2]);
	std::cout << "Enter Phone Number: " << std::endl;
	std::getline(std::cin, data[3]);
	phone_n = (unsigned int)std::atoi(data[3].c_str());
	std::cout << "Darkest Secret: " << std::endl;
	std::getline(std::cin, data[4]);
	this->AddContact(data[0], data[1], data[2], phone_n, data[4]);
}

void PhoneBook::Search(){
	
	std::string	data;
	
	for (int i = 0; i < 8; i++){
		contacts[i].printline(i);
	}
	std::cout << "Enter contact id: " << std::endl;
	std::getline(std::cin, data);
	int id = (unsigned int)std::atoi(data.c_str());
	if  (id < 8)
		contacts[id].print();
}

void PhoneBook::AddContact(std::string first_name, std::string last_name, 
			std::string nickname, unsigned int phone_n, 
			std::string darkest_secret){
	static int count;
	
	contacts[count % 8].update_contact(first_name, last_name, nickname, phone_n, darkest_secret);
	count ++;				
}


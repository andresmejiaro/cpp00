/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejia <amejia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 23:07:28 by amejia            #+#    #+#             */
/*   Updated: 2023/06/01 21:01:32 by amejia           ###   ########.fr       */
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

	data[3] = "r";
	std::cout << "Enter Name: " << std::endl;
	std::getline(std::cin, data[0]);
	std::cout << "Enter Last Name: " << std::endl;
	std::getline(std::cin, data[1]);
	std::cout << "Enter Nickname: " << std::endl;
	std::getline(std::cin, data[2]);
	while (check_digits(data[3])){
		std::cout << "Enter Phone Number: " << std::endl;
		std::getline(std::cin, data[3]);
	}
	phone_n = (unsigned int)std::atoi(data[3].c_str());
	std::cout << "Darkest Secret: " << std::endl;
	std::getline(std::cin, data[4]);
	this->AddContact(data[0], data[1], data[2], phone_n, data[4]);
}

void PhoneBook::Search(){
	
	std::string	data;
	std::cout << "     Index|First Name| Last Name| Nickname" << std::endl;
	for (int i = 0; i < 8; i++){
		contacts[i].printline(i);
	}
	std::cout << "Enter contact id: " << std::endl;
	std::getline(std::cin, data);
	int id = (unsigned int)std::atoi(data.c_str());
	if  (id < 8 && contacts[id].get_init() == 1)
		contacts[id].print();
}

void PhoneBook::AddContact(std::string first_name, std::string last_name, 
			std::string nickname, unsigned int phone_n, 
			std::string darkest_secret){
	static int count;
	
	contacts[count % 8].update_contact(first_name, last_name, nickname, phone_n, darkest_secret);
	count ++;				
}

int PhoneBook::check_digits(std::string str){
	for (size_t k = 0; k < str.size(); k++)
	{
		if (!std::isdigit(str[k]))
			return (1);
	}
	return(0);
}
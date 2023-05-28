/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejia <amejia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 23:07:28 by amejia            #+#    #+#             */
/*   Updated: 2023/05/28 23:56:03 by amejia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(){
	
}

PhoneBook::~PhoneBook(){
	
}

void PhoneBook::AddContact(){
	std::string	data[3];

	std::cout << "Enter Name:" << std::endl;
	std::getline(std::cin, data[0]);
	std::cout << "Enter Last Name" << std::endl;
	std::getline(std::cin, data[1]);
	std::cout << "Enter Nickname" << std::endl;
	std::getline(std::cin, data[2]);
	this->AddContact(0, data[0], data[1], data[2]);
}

void PhoneBook::Search(){
	
}

void PhoneBook::AddContact(int id, std::string first_name, std::string last_name, 
			std::string nickname){
	static int count;
	
	contacts[count % 8].update_contact(id, first_name, last_name, nickname);
	count ++;				
}


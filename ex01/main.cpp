/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejia <amejia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 23:06:08 by amejia            #+#    #+#             */
/*   Updated: 2023/05/28 23:56:19 by amejia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>

int main(void){
	std::string		command = "";
	PhoneBook		ph_book;

	while (command != "EXIT"){
		std::cout << "Enter ADD, SEARCH or EXIT" << std::endl;
		std::getline(std::cin, command);
		if (command == "ADD"){
			ph_book.AddContact();
		} else if (command == "SEARCH")
			ph_book.Search();
	}
	
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejia <amejia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 18:47:00 by amejia            #+#    #+#             */
/*   Updated: 2023/05/28 22:17:16 by amejia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main(int argc, char **argv){
	
	if (argc == 1){
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;		
	}
	for (int i = 1; i < argc; i++){
		std::string string_j = argv[i];
		for (unsigned int j =0; j < string_j.length(); j++)
			string_j[j] = std::toupper(string_j[j]);
		std::cout << string_j << std::endl;
	}
}

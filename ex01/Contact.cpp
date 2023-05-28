/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejia <amejia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 22:47:38 by amejia            #+#    #+#             */
/*   Updated: 2023/05/28 23:30:54 by amejia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
	id = 0;
	first_name = "";
	last_name = "";
	nickmame = "";
}

void Contact::update_contact(int nid, std::string nfirst_name, std::string nlast_name, 
			std::string nnickname){
	id = nid;
	first_name = nfirst_name;
	last_name = nlast_name;
	nickmame = nnickname;
}

Contact::~Contact()
{
	
}
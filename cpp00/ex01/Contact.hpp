/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <ilasrarf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 11:27:08 by ilasrarf          #+#    #+#             */
/*   Updated: 2023/10/31 15:23:59 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include "PhoneBook.hpp"

class Contact
{
private:
	std::string phonenumber;
	std::string firstname;
	std::string lastname;
	std::string nikename;
	std::string darkestsecret;
public:
	std::string get_phonenumber();
	std::string get_firstname();
	std::string get_lastname();
	std::string get_nikename();
	std::string get_darkestsecret();
	void set_phonenumber( std::string );
	void set_firstname( std::string );
	void set_lastname( std::string );
	void set_nikename( std::string );
	void set_darkestsecret( std::string );
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   head.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <ilasrarf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 15:59:37 by ilasrarf          #+#    #+#             */
/*   Updated: 2023/10/24 14:23:55 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HEAD_HPP
#define HEAD_HPP

#include <iostream>

class Contact
{
private:
	int phonenumber;
	std::string firstname;
	std::string lastname;
	std::string nikename;
	std::string darkestsecret;
public:
	void get_fistname();
	void get_lastname();
	void get_nikename();
	void get_phonenumber();
	void get_darkestsecret();
public:
	void set_fistname();
	void set_lastname();
	void set_nikename();
	void set_phonenumber(int phonenumber);
	void set_darkestsecret();
};

class PhoneBook
{
private:
	Contact con[8];
public:
	void get_contacts();
public:
	void set_contacts();
};


#endif
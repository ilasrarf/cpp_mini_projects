/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <ilasrarf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 22:38:24 by ilasrarf          #+#    #+#             */
/*   Updated: 2023/12/05 17:06:36 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main() {

	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string& stringREF = str;

	std::cout << "Memory address of the string variable : " << &str << "\n";
	std::cout << "Memory address held by stringPTR: " << stringPTR << "\n";
	std::cout << "Memory address held by stringREF: " << &stringREF << "\n";

	std::cout << "value of the string variable : " << str << "\n";
	std::cout << "value pointed to by stringPTR : " << *stringPTR << "\n";
	std::cout << "value pointed to by stringREF : " << stringREF << "\n";
	return 0;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <ilasrarf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 20:27:14 by ilasrarf          #+#    #+#             */
/*   Updated: 2024/01/15 21:41:43 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dog.hpp"
#include "cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;
	delete i;
	const Animal* arr[4];

	for (int i = 0; i < 4; i++) {
		if (i < 2) {
			arr[i] = new Dog();
			arr[i]->makeSound();
		}
		else
		{
			arr[i] = new Cat();
			arr[i]->makeSound();
		}
	}
	for (int i = 0; i < 4; ++i) {
		delete arr[i];
	}
	return 0;
}

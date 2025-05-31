/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostian <akostian@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 16:44:40 by akostian          #+#    #+#             */
/*   Updated: 2025/05/31 12:10:31 by akostian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../include/Cat.hpp"
#include "../include/Dog.hpp"
#include "../include/Animal.hpp"
#include "../include/WrongCat.hpp"

int main(void)
{
	{
		Animal().makeSound();
		Cat().makeSound();
		Dog().makeSound();
	}
	{
		Cat	cat1;
		Dog	dog1;
		std::cout << "Cat1 type: " << cat1.getType() << "\n";
		std::cout << "Dog1 type: " << cat1.getType() << "\n";

		Cat	cat2(cat1);
		Dog	dog2(dog1);
		std::cout << "Cat2 type: " << cat2.getType() << "\n";
		std::cout << "Dog2 type: " << dog2.getType() << "\n";

		cat1 = cat2;
		dog1 = dog2;
		std::cout << "Cat1 type: " << cat1.getType() << "\n";
		std::cout << "Dog1 type: " << dog1.getType() << "\n";
	}
	{
		const Animal	*meta = new Animal();
		const Animal	*j = new Dog();
		const Animal	*i = new Cat();
		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound(); //will output the cat sound!
		j->makeSound();
		meta->makeSound();

		delete i;
		delete j;
		delete meta;
	}
	{
		std::cout << "----  WrongAnimal test: ----" << "\n";
		const WrongAnimal	*meta = new WrongAnimal();
		const WrongAnimal	*i = new WrongCat();
		std::cout << i->getType() << " " << std::endl;
		i->makeSound(); //will NOT output the cat sound!
		meta->makeSound();

		delete i;
		delete meta;
	}
}

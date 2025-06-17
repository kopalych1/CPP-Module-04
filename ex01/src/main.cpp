/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostian <akostian@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 16:44:40 by akostian          #+#    #+#             */
/*   Updated: 2025/06/17 15:01:33 by akostian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../include/Cat.hpp"
#include "../include/Dog.hpp"

static void	printTestN(void)
{
	static short	n = 0;

	std::cout << "\n" << ">========= Test " << n++ << " =========<" << "\n" << "\n";
}

int	main(void)
{
	{
		printTestN();

		Brain	b;

		b.setIdea(42, "123");

		Brain	a(b);
		std::cout << a.getIdea(42) << "\n";

		b.setIdea(10, "newIdea");

		a = b;
		std::cout << a.getIdea(10) << "\n";

	}
	{
		printTestN();

		Cat	*cat1 = new Cat();

		Brain *cat1_brain = cat1->getBrain();

		cat1_brain->setIdea(1, "Idea1");
		cat1_brain->setIdea(2, "Idea2");
		cat1_brain->setIdea(3, "Idea3");

		Cat	cat2(*cat1);

		std::cout << "Idea 1: " << cat2.getBrain()->getIdea(1) << "\n";
		std::cout << "Idea 2: " << cat2.getBrain()->getIdea(2) << "\n";
		std::cout << "Idea 3: " << cat2.getBrain()->getIdea(3) << "\n";
		std::cout << "Idea 4: " << cat2.getBrain()->getIdea(4) << "\n";

		delete cat1;
	}
	{
		printTestN();

		Dog	*dog1 = new Dog();

		Brain *dog1_brain = dog1->getBrain();

		dog1_brain->setIdea(1, "Idea1");
		dog1_brain->setIdea(2, "Idea2");
		dog1_brain->setIdea(3, "Idea3");

		Dog	dog2;

		dog2 = *dog1;

		std::cout << "Idea 1: " << dog2.getBrain()->getIdea(1) << "\n";
		std::cout << "Idea 2: " << dog2.getBrain()->getIdea(2) << "\n";
		std::cout << "Idea 3: " << dog2.getBrain()->getIdea(3) << "\n";
		std::cout << "Idea 4: " << dog2.getBrain()->getIdea(4) << "\n";

		delete dog1;
	}
	{
		printTestN();

		const int	N = 4;

		const Animal	*animal_array[N * 2];
		for (int i = 0; i < N; i++)
			animal_array[i] = new Dog();

		for (int i = 0; i < N; i++)
			animal_array[i + N] = new Cat();

		for (int i = 0; i < N * 2; i++)
			delete animal_array[i];
		
	}
}

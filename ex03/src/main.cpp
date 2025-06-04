/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostian <akostian@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 02:27:41 by akostian          #+#    #+#             */
/*   Updated: 2025/06/04 17:50:30 by akostian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Character.hpp"
#include "../include/Ice.hpp"
#include "../include/Cure.hpp"
#include "../include/MateriaSource.hpp"

int	main(void)
{
	{
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());

		ICharacter* me = new Character("me");
		AMateria* tmp;

		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);
		ICharacter* bob = new Character("bob");
		me->use(0, *bob);
		me->use(1, *bob);

		delete bob;
		delete me;
		delete src;
	}
	{
		std::cout << "more tests: " << "\n\n";

		IMateriaSource*	src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());

		Character	*player = new Character("Player");
		
		Character	*bob = new Character("Bob");
		
		AMateria	*ice = src->createMateria("ice");
		AMateria	*cure = src->createMateria("cure");
		
		std::cout << ice->getType() << "\n";
		std::cout << cure->getType() << "\n";
		
		player->equip(ice);
		player->equip(cure);
		player->equip(ice);
		player->equip(cure);
		
		std::cout << "=== Player is casitng: ===" << "\n";
		player->use(0, *bob);
		player->use(1, *bob);
		player->use(2, *bob);
		player->use(3, *bob);
		
		Character	dummy1(*player);
		
		// for (int i = 0; i < 4; i++)
		// 	player->unequip(i);
		
		std::cout << "=== Dummy1 is casitng: ===" << "\n";
		
		dummy1.use(0, *bob);
		dummy1.use(1, *bob);
		dummy1.use(2, *bob);


		player->unequip(1);
		player->unequip(3);
		
		// Since dummy1 creates a deep copy of player, cures are copied as well,
		// so we must not unequip these two:
		// dummy1.unequip(1);
		// dummy1.unequip(3);
		
		delete player;
		delete cure;
		delete bob;
		delete src;
	}
}

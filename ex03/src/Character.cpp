/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostian <akostian@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 02:19:59 by akostian          #+#    #+#             */
/*   Updated: 2025/06/04 17:00:13 by akostian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Character.hpp"

Character::Character() : name("Default Character")
{
	for (unsigned char i = 0; i < 4; i++)
		this->inventory[i] = 0;
}

Character::Character(std::string name) : name(name)
{
	for (unsigned char i = 0; i < 4; i++)
		this->inventory[i] = 0;
}

Character::Character(const Character& other)
{
	this->name = other.name;
	for (unsigned char i = 0; i < 4; i++)
	{
		this->inventory[i] = 0;
		if (other.inventory[i])
			this->inventory[i] = other.inventory[i]->clone();
	}
}

Character& Character::operator=(const Character& other)
{
	if (this != &other) {
		this->name = other.name;

		for (unsigned char i = 0; i < 4; i++)
		{
			delete this->inventory[i];

			this->inventory[i] = 0;
			if (other.inventory[i])
				this->inventory[i] = other.inventory[i]->clone();
		}
	}
	return *this;
}

Character::~Character()
{
	for (unsigned char i = 0; i < 4; i++)
	{
		// Making sure not to delete the same Materia twice
		for (unsigned char j = i + 1; j < 4; j++)
			if (this->inventory[i] == this->inventory[j])
				this->inventory[j] = 0;

		delete this->inventory[i];
	}
}


std::string const	&Character::getName() const
{
	return this->name;
}


void	Character::equip(AMateria* m)
{
	unsigned char	empty_slot = -1;

	for (unsigned char i = 0; i < 4; i++)
	{
		if (!this->inventory[i])
		{
			empty_slot = i;
			break;
		}
	}
	if (empty_slot == (unsigned char)-1)
		return ;

	this->inventory[empty_slot] = m;
}

/**
 * @brief Unequips a Materia from inventory
 * 
 * If the slot is empty or the index is out of range [0, 3], nothing happens.
 * 
 * @param idx Inventory slot index (from 0 to 3)
 */
void	Character::unequip(int idx)
{
	if (idx < 0 || idx > 3)
		return ;
	if (!this->inventory[idx])
		return ;
	this->inventory[idx] = 0;
}

/**
 * @brief Uses a Materia on a target
 * 
 * If the slot is empty or the index is out of range [0, 3], nothing happens.
 * 
 * @param idx    Inventory slot index (from 0 to 3)
 * @param target Reference to the target character
 */
void	Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx > 3)
		return ;
	if (!this->inventory[idx])
		return ;
	this->inventory[idx]->use(target);
}

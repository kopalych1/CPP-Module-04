/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostian <akostian@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 16:34:49 by akostian          #+#    #+#             */
/*   Updated: 2025/06/04 16:55:57 by akostian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (unsigned char i = 0; i < 4; i++)
		this->materias[i] = 0;
}

MateriaSource::MateriaSource(const MateriaSource& other)
{
	for (unsigned char i = 0; i < 4; i++)
	{
		this->materias[i] = 0;
		if (other.materias[i])
			this->materias[i] = other.materias[i]->clone();
	}
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other)
{
	if (this != &other) {
		for (unsigned char i = 0; i < 4; i++)
		{
			delete this->materias[i];

			this->materias[i] = 0;
			if (other.materias[i])
				this->materias[i] = other.materias[i]->clone();
		}
	}
	return *this;
}

MateriaSource::~MateriaSource()
{
	for (unsigned char i = 0; i < 4; i++)
	{
		// Making sure not to delete the same Materia twice
		for (unsigned char j = i + 1; j < 4; j++)
			if (this->materias[i] == this->materias[j])
				this->materias[j] = 0;

		delete this->materias[i];
	}
}


void		MateriaSource::learnMateria(AMateria* m)
{
	for (unsigned char i = 0; i < 4; i++)
	{
		if (!this->materias[i])
		{
			this->materias[i] = m;
			return;
		}
	}
}

AMateria*	MateriaSource::createMateria(std::string const &type)
{
	for (unsigned char i = 0; i < 4; i++)
		if (this->materias[i]->getType() == type)
			return this->materias[i]->clone();
	return 0;
}

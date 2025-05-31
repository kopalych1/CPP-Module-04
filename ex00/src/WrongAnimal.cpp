/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostian <akostian@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 11:29:58 by akostian          #+#    #+#             */
/*   Updated: 2025/05/31 12:05:40 by akostian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
}

WrongAnimal::WrongAnimal(const WrongAnimal& other)
{
	this->type = other.type;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)
{
	if (this != &other) {
		this->type = other.type;
	}
	return *this;
}

WrongAnimal::~WrongAnimal()
{
}

void	WrongAnimal::makeSound() const
{
	std::cout << "Wrong ..." << "\n";
}

std::string	WrongAnimal::getType(void) const
{
	return this->type;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostian <akostian@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 16:45:08 by akostian          #+#    #+#             */
/*   Updated: 2025/05/27 02:19:28 by akostian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"

Animal::Animal()
{
	if (DO_PRINT_DEBUG)
		std::cout << ANIMAL << CONSTRUCTOR << " Default constructor called" << "\n";
}

Animal::Animal(const Animal& other)
{
	if (DO_PRINT_DEBUG)
		std::cout << ANIMAL << CONSTRUCTOR << " Copy constructor called" << "\n";
	this->type = other.type;
}

Animal& Animal::operator=(const Animal& other)
{
	if (DO_PRINT_DEBUG)
		std::cout << ANIMAL << OPERATOR << " Assignment opperator called" << "\n";
	if (this != &other) {
		this->type = other.type;
	}
	return *this;
}

Animal::~Animal()
{
	if (DO_PRINT_DEBUG)
		std::cout << ANIMAL << DESTRUCTOR << " Default destructor called" << "\n";
}

void	Animal::makeSound() const
{
	std::cout << ANIMAL << " ..." << "\n";
}

std::string	Animal::getType(void) const
{
	return this->type;
}

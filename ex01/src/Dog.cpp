/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostian <akostian@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 16:45:10 by akostian          #+#    #+#             */
/*   Updated: 2025/06/01 00:48:24 by akostian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../include/Dog.hpp"

Dog::Dog() : Animal()
{
	if (DO_PRINT_DEBUG)
		std::cout << DOG << CONSTRUCTOR << " Default constructor called" << "\n";
	this->type = "Dog";
	this->brain = new Brain();
}

Dog::Dog(const Dog& other) : Animal(other)
{
	if (DO_PRINT_DEBUG)
		std::cout << DOG << CONSTRUCTOR << " Copy constructor called" << "\n";
	this->brain = new Brain(*other.brain);
}

Dog& Dog::operator=(const Dog& other)
{
	if (DO_PRINT_DEBUG)
		std::cout << DOG << OPERATOR << " Assignment opperator called" << "\n";
	if (this != &other) {
		Animal::operator=(other);
		this->brain = other.brain;
	}
	return *this;
}

Dog::~Dog()
{
	if (DO_PRINT_DEBUG)
		std::cout << DOG << DESTRUCTOR << " Default destructor called" << "\n";
	delete this->brain;
}


void	Dog::makeSound() const
{
	std::cout << DOG << " Woof" << "\n";
}


Brain	*Dog::getBrain() const
{
	return this->brain;
}

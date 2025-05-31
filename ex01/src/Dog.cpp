/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostian <akostian@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 16:45:10 by akostian          #+#    #+#             */
/*   Updated: 2025/05/31 11:21:36 by akostian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../include/Dog.hpp"

Dog::Dog() : Animal()
{
	if (DO_PRINT_DEBUG)
		std::cout << DOG << CONSTRUCTOR << " Default constructor called" << "\n";
	this->type = "Dog";
}

Dog::Dog(const Dog& other) : Animal(other)
{
	if (DO_PRINT_DEBUG)
		std::cout << DOG << CONSTRUCTOR << " Copy constructor called" << "\n";
}

Dog& Dog::operator=(const Dog& other)
{
	if (DO_PRINT_DEBUG)
		std::cout << DOG << OPERATOR << " Assignment opperator called" << "\n";
	if (this != &other) {
		Animal::operator=(other);
	}
	return *this;
}

Dog::~Dog()
{
	if (DO_PRINT_DEBUG)
		std::cout << DOG << DESTRUCTOR << " Default destructor called" << "\n";
}

void	Dog::makeSound() const
{
	std::cout << DOG << " Woof" << "\n";
}

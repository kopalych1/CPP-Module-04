/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostian <akostian@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 16:45:06 by akostian          #+#    #+#             */
/*   Updated: 2025/05/27 02:12:50 by akostian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../include/Cat.hpp"

Cat::Cat() : Animal()
{
	if (DO_PRINT_DEBUG)
		std::cout << CAT << CONSTRUCTOR << " Default constructor called" << "\n";
	this->type = "Cat";
}

Cat::Cat(const Cat& other) : Animal(other)
{
	if (DO_PRINT_DEBUG)
		std::cout << CAT << CONSTRUCTOR << " Copy constructor called" << "\n";
}

Cat& Cat::operator=(const Cat& other)
{
	if (DO_PRINT_DEBUG)
		std::cout << CAT << OPERATOR << " Assignment opperator called" << "\n";
	if (this != &other) {
		Animal::operator=(other);
	}
	return *this;
}

Cat::~Cat()
{
	if (DO_PRINT_DEBUG)
		std::cout << CAT << DESTRUCTOR << " Default destructor called" << "\n";
}

void	Cat::makeSound() const
{
	std::cout << CAT << " Meow" << "\n";
}

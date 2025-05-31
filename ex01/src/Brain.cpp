/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostian <akostian@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 12:33:01 by akostian          #+#    #+#             */
/*   Updated: 2025/05/31 20:34:33 by akostian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Brain.hpp"

Brain::Brain()
{
	if (DO_PRINT_DEBUG)
		std::cout << BRAIN << CONSTRUCTOR << " Default constructor called" << "\n";
	for (unsigned char i = 0; i < 100; i++)
		this->ideas[i] = "";
}

Brain::Brain(const Brain& other)
{
	if (DO_PRINT_DEBUG)
		std::cout << BRAIN << CONSTRUCTOR << " Copy constructor called" << "\n";
	for (unsigned char i = 0; i < 100; i++)
		this->ideas[i] = other.ideas[i];
}

Brain& Brain::operator=(const Brain& other)
{
	if (DO_PRINT_DEBUG)
		std::cout << BRAIN << OPERATOR << " Assignment opperator called" << "\n";
	if (this != &other) {
		for (unsigned char i = 0; i < 100; i++)
			this->ideas[i] = other.ideas[i];
	}
	return *this;
}

Brain::~Brain()
{
	if (DO_PRINT_DEBUG)
		std::cout << BRAIN << DESTRUCTOR << " Default destructor called" << "\n";
}


/**
 * @brief       Returns an idea from brain
 * 
 * @param n     Index of idea (from 1 to 100)
 */
std::string	Brain::getIdea(unsigned char n) const
{
	if (n > 100 || n == 0)
		throw std::out_of_range("Brain::getIdea: index out of range");
	return this->ideas[n - 1];
}

/**
 * @brief       Sets an idea to brain
 * 
 * @param n     Index of idea (from 1 to 100)
 * @param value Idea to be set
 */
void	Brain::setIdea(unsigned char n, std::string value)
{
	if (n > 100 || n == 0)
		throw std::out_of_range("Brain::getIdea: index out of range");
	this->ideas[n - 1] = value;
}

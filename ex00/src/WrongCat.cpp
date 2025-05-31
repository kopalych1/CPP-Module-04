/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostian <akostian@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 11:28:56 by akostian          #+#    #+#             */
/*   Updated: 2025/05/31 12:02:58 by akostian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	this->type = "Cat";
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other)
{
}

WrongCat& WrongCat::operator=(const WrongCat& other)
{
	if (this != &other) {
		WrongAnimal::operator=(other);
	}
	return *this;
}

WrongCat::~WrongCat()
{
}

void	WrongCat::makeSound() const
{
	std::cout << " Meow" << "\n";
}

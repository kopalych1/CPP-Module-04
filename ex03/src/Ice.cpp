/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostian <akostian@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 01:14:51 by akostian          #+#    #+#             */
/*   Updated: 2025/06/04 15:54:58 by akostian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Ice.hpp"

Ice::Ice()
{
	this->type = "ice";
}

Ice::Ice(const Ice& other) : AMateria("ice")
{
	(void)other;
}

Ice& Ice::operator=(const Ice& other)
{
	if (this != &other) {
		(void)other;
		this->type = "ice";
	}
	return *this;
}

Ice::~Ice()
{
}


Ice	*Ice::clone() const
{
	return new Ice();
}

void	Ice::use(ICharacter& target)
{
	if (DO_PRINT_DEBUG)
		std::cout << "* shoots an " CYN "ice" CRESET " bolt at " << MAG << target.getName() << CRESET << " *" << "\n";
	else
		std::cout << "* shoots an ice bolt at " << target.getName() << " *" << "\n";
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostian <akostian@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 16:28:29 by akostian          #+#    #+#             */
/*   Updated: 2025/06/04 16:09:45 by akostian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cure.hpp"

Cure::Cure()
{
	this->type = "cure";
}

Cure::Cure(const Cure& other)  : AMateria("cure")
{
	(void)other;
}

Cure& Cure::operator=(const Cure& other)
{
	(void)other;
	if (this != &other) {
		this->type = "cure";
	}
	return *this;
}

Cure::~Cure()
{
}


Cure	*Cure::clone() const
{
	return new Cure();
}

void	Cure::use(ICharacter& target)
{
	if (DO_PRINT_DEBUG)
		std::cout << "* " GRN "heals" CRESET " " << MAG << target.getName() << CRESET << "'s wounds *" << "\n";
	else
		std::cout << "* heals " << target.getName() << "'s wounds *" << "\n";
}

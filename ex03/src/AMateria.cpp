/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostian <akostian@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 01:54:21 by akostian          #+#    #+#             */
/*   Updated: 2025/06/04 17:58:16 by akostian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AMateria.hpp"

AMateria::AMateria() : type("")
{
}

AMateria::AMateria(const std::string &type) : type(type)
{
}

AMateria::AMateria(const AMateria& other) : type(other.type)
{
}

AMateria& AMateria::operator=(const AMateria& other)
{
	if (this != &other) {
		(void)other;
	}
	return *this;
}

AMateria::~AMateria()
{
}


const std::string	&AMateria::getType() const
{
	return this->type;
}


void	AMateria::use(ICharacter& target)
{
	(void)target;
}

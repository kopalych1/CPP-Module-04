/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostian <akostian@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 17:42:40 by akostian          #+#    #+#             */
/*   Updated: 2025/05/31 13:12:20 by akostian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include "colors.hpp"
# include <iostream>
# include "Brain.hpp"

# define ANIMAL "[" BBLK "Ani" CRESET "]"

class Animal {
	protected:
		std::string type;

	public:
		Animal();
		Animal(const Animal& other);
		Animal& operator=(const Animal& other);
		virtual ~Animal();

		virtual void	makeSound() const;

		std::string	getType(void) const;
};

#endif // ANIMAL_HPP
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostian <akostian@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 11:30:39 by akostian          #+#    #+#             */
/*   Updated: 2025/05/31 12:04:11 by akostian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_ANIMAL_HPP
# define WRONG_ANIMAL_HPP

# include "ANSI_colors.h"
# include "colors.hpp"
# include <iostream>

class WrongAnimal {
	protected:
		std::string type;
	
	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal& other);
		WrongAnimal& operator=(const WrongAnimal& other);
		~WrongAnimal();

		void	makeSound() const;

		std::string	getType(void) const;
};

#endif // WRONG_ANIMAL_HPP
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostian <akostian@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 02:14:26 by akostian          #+#    #+#             */
/*   Updated: 2025/06/03 19:09:43 by akostian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMETERIA_HPP
# define AMETERIA_HPP

# include <iostream>
# include "ICharacter.hpp"
# include "colors.hpp"

class AMateria {
	protected:
		std::string	type;
	
	public:
		AMateria();
		AMateria(const std::string &type);
		AMateria(const AMateria& other);
		AMateria& operator=(const AMateria& other);
		virtual ~AMateria();

		/**
		 * @brief  Returns the materia type
		 * 
		 * @return const std::string& type
		 */
		const std::string	&getType() const; //Returns the materia type

		virtual AMateria	*clone() const = 0;
		virtual void		use(ICharacter& target);
};

#endif // AMETERIA_HPP

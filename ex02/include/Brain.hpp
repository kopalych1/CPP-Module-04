/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostian <akostian@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 12:29:35 by akostian          #+#    #+#             */
/*   Updated: 2025/05/31 20:34:06 by akostian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include "colors.hpp"

# define BRAIN "[" MAG "Brn" CRESET "]"

class Brain {
	private:
		std::string	ideas[100];

	public:
		Brain();
		Brain(const Brain& other);
		Brain& operator=(const Brain& other);
		~Brain();

		std::string	getIdea(unsigned char n) const;
		void		setIdea(unsigned char n, std::string value);
};

#endif // BRAIN_HPP
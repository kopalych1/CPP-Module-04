/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colors.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostian <akostian@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 01:24:40 by akostian          #+#    #+#             */
/*   Updated: 2025/05/31 13:12:12 by akostian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COLORS_HPP
# define COLORS_HPP

# include "ANSI_colors.h"

# define CLAPTRAP "[" MAG "ClapTrap" CRESET "]"
# define CONSTRUCTOR "[" BLK "Constructor" CRESET "]"
# define DESTRUCTOR "[" RED "Destructor" CRESET "]"
# define OPERATOR "[" YEL "Operator" CRESET "]"

# define DO_PRINT_DEBUG 1

#endif // COLORS_HPP
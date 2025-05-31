/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostian <akostian@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 16:44:40 by akostian          #+#    #+#             */
/*   Updated: 2025/05/31 20:23:05 by akostian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../include/Cat.hpp"
#include "../include/Dog.hpp"

int	main(void)
{
	{
		Brain	b;

		b.setIdea(42, "123");

		Brain	a(b);
		std::cout << a.getIdea(42) << "\n";

		b.setIdea(10, "newIdea");

		a = b;
		std::cout << a.getIdea(10) << "\n";
	}
}

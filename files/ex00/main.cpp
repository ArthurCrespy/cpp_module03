/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrespy <acrespy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 15:09:31 by acrespy           #+#    #+#             */
/*   Updated: 2023/06/14 15:59:54 by acrespy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap clap("0");
	ClapTrap clap2("1");

	clap.attack("1");
	clap.beRepaired(5);

	clap2.takeDamage(9);
	for (int i = 0; i < 10; i++)
		clap2.beRepaired(1);
	clap2.takeDamage(2);
	clap2.beRepaired(1);
	clap2.beRepaired(1);
	clap2.takeDamage(42);
	clap2.beRepaired(42);

	return (0);
}

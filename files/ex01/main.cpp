/* ************************************************************************** */
/*                                                                            */
/*                                                                                                                   :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrespy <acrespy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 15:09:31 by acrespy           #+#    #+#             */
/*   Updated: 2023/06/14 15:59:54 by acrespy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	ClapTrap clap("0");
	ClapTrap clap2("1");
	ScavTrap scav("2");
	ScavTrap scav2("3");

	clap.attack("1");
	clap2.takeDamage(20);
	clap2.beRepaired(10);
	clap2.attack("0");
	clap.takeDamage(20);
	clap.beRepaired(100);

	scav.attack("3");
	scav2.takeDamage(20);
	scav2.beRepaired(50);
	scav2.attack("2");
	scav.takeDamage(20);
	scav.beRepaired(5);
	scav.guardGate();
	scav.guardGate();

	return (0);
}

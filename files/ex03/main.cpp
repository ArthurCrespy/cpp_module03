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
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{
	ClapTrap    clap("0");
	ClapTrap    clap2("1");
	ScavTrap    scav("2");
	ScavTrap    scav2("3");
	FragTrap    frag("4");
	FragTrap    frag2("5");
	DiamondTrap diamond("6");
	DiamondTrap diamond2("7");

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

	frag.attack("5");
	frag2.takeDamage(20);
	frag2.beRepaired(50);
	frag2.attack("4");
	frag.takeDamage(20);
	frag.beRepaired(5);
	frag.highFivesGuys();
	frag.highFivesGuys();

	diamond.attack("7");
	diamond2.takeDamage(20);
	diamond2.beRepaired(50);
	diamond2.attack("6");
	diamond.takeDamage(20);
	diamond.beRepaired(5);
	diamond.highFivesGuys();
	diamond.highFivesGuys();
	diamond.guardGate();
	diamond.guardGate();
	diamond.whoAmI();
	diamond2.whoAmI();

	return (0);
}

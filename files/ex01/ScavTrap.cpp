/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrespy <acrespy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 15:09:31 by acrespy           #+#    #+#             */
/*   Updated: 2023/06/14 15:59:54 by acrespy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
	std::cout << "ScavTrap default constructor called" << std::endl;
	this->_guardGate = false;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap name constructor called" << std::endl;
	this->_guardGate = false;
}

ScavTrap::ScavTrap(ScavTrap const &src)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = src;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &rhs)
{
	std::cout << "ScavTrap assignation operator called" << std::endl;
	if (this != &rhs)
	{
		setName(rhs.getName());
		setHitPoints(rhs.getHitPoints());
		setEnergyPoints(rhs.getEnergyPoints());
		setAttackDamage(rhs.getAttackDamage());
		this->_guardGate = rhs._guardGate;
	}
	return (*this);
}

void ScavTrap::attack(std::string const &target)
{
	if (getHitPoints() <= 0)
		std::cout << "ScavTrap " << getName() << " is already dead!" << std::endl;
	else if (getEnergyPoints() <= 0)
		std::cout << "ScavTrap " << getName() << " need more energy points to attack!" << std::endl;
	else
	{
		std::cout << "ScavTrap " << getName() << " attack " << target << ", causing " << getAttackDamage() << " points of damage!" << std::endl;
		setEnergyPoints(getEnergyPoints() - 1);
	}
}

void ScavTrap::guardGate()
{
	if (this->_guardGate)
	{
		std::cout << "ScavTrap " << getName() << " have exit Gate keeper mode" << std::endl;
		this->_guardGate = false;
	}
	else
	{
		std::cout << "ScavTrap " << getName() << " have entered in Gate keeper mode" << std::endl;
		this->_guardGate = true;
	}
}

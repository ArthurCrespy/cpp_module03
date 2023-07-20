/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrespy <acrespy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 15:09:31 by acrespy           #+#    #+#             */
/*   Updated: 2023/06/14 15:59:54 by acrespy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name("default_clap_name"), _hit_points(100), _energy_points(50), _attack_damage(20)
{
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hit_points(100), _energy_points(50), _attack_damage(20)
{
	std::cout << "ClapTrap name constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &src)
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = src;
}

ClapTrap::~ClapTrap() {}

ClapTrap &ClapTrap::operator=(ClapTrap const &rhs)
{
	std::cout << "ClapTrap assignation operator called" << std::endl;
	if (this != &rhs)
	{
		setName(rhs.getName());
		setHitPoints(rhs.getHitPoints());
		setEnergyPoints(rhs.getEnergyPoints());
		setAttackDamage(rhs.getAttackDamage());
	}
	return (*this);
}

void ClapTrap::attack(std::string const &target)
{
	if (getEnergyPoints() < getAttackDamage())
		std::cout << "ClapTrap " << getName() << " need more energy points to attack!" << std::endl;
	else
	{
		std::cout << "ClapTrap " << getName()  << " attack " << target << ", causing " << getAttackDamage() << " points of damage!" << std::endl;
		setEnergyPoints(getEnergyPoints() - getAttackDamage());
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << this->_name << " take " << amount << " points of damage!" << std::endl;
	setHitPoints(getHitPoints() - amount);
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (getEnergyPoints() < (int) amount)
		std::cout << "ClapTrap " << this->_name << " need more energy points to be healed of " << amount << " points of damage! " << std::endl;
	else if (getHitPoints() + (int) amount > 100)
		std::cout << "ClapTrap " << this->_name << " has too much health points to be healed of " << amount << " points of damage! " << std::endl;
	else
	{
		std::cout << "ClapTrap " << this->_name << " is healed of " << amount << " points of damage!" << std::endl;
		setHitPoints(getHitPoints() + amount);
		setEnergyPoints(getEnergyPoints() - amount);
	}
}

std::string ClapTrap::getName(void) const
{
	return (this->_name);
}

int ClapTrap::getHitPoints(void) const
{
	return (this->_hit_points);
}

int ClapTrap::getEnergyPoints(void) const
{
	return (this->_energy_points);
}

int ClapTrap::getAttackDamage(void) const
{
	return (this->_attack_damage);
}

void ClapTrap::setName(std::string name)
{
	this->_name = name;
}

void ClapTrap::setHitPoints(int hit_points)
{
	this->_hit_points = hit_points;
}

void ClapTrap::setEnergyPoints(int energy_points)
{
	this->_energy_points = energy_points;
}

void ClapTrap::setAttackDamage(int attack_damage)
{
	this->_attack_damage = attack_damage;
}

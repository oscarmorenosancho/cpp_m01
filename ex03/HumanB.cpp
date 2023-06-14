/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 15:14:21 by omoreno-          #+#    #+#             */
/*   Updated: 2023/06/14 17:49:04 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string n) : name(n), weapon(nullptr)
{
}

HumanB::~HumanB()
{
}

void	HumanB::setWeapon(Weapon& w)
{
	weapon = &w;
}

const Weapon&	HumanB::getWeapon()
{
	return *weapon;
}

void	HumanB::attack()
{
	std::cout << name;
	std::cout << " attacks with their ";
	std::cout << weapon->getType();
	std::cout << std::endl;
}
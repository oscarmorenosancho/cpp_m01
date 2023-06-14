/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 15:14:21 by omoreno-          #+#    #+#             */
/*   Updated: 2023/06/14 18:04:34 by omoreno-         ###   ########.fr       */
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
	if (weapon)
	{
		std::cout << " attacks with their ";
		std::cout << weapon->getType();
	}
	else
		std::cout << " attacks without weapon";
	std::cout << std::endl;
}
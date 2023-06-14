/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 15:14:27 by omoreno-          #+#    #+#             */
/*   Updated: 2023/06/14 17:56:58 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string n, Weapon& w) : name(n), weapon(w)
{
}

HumanA::~HumanA()
{
}

const Weapon&	HumanA::getWeapon()
{
	return weapon;
}

void	HumanA::attack()
{
	std::cout << name;
	std::cout << " attacks with their ";
	std::cout << weapon.getType();
	std::cout << std::endl;
}

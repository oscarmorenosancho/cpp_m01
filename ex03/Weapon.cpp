/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 15:14:12 by omoreno-          #+#    #+#             */
/*   Updated: 2023/06/14 17:54:57 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const Weapon& w)
{
	setType(w.type);
}

Weapon::Weapon(const std::string t)
{
	setType(t);
}

Weapon::~Weapon()
{
}

Weapon& Weapon::operator=(Weapon& b)
{
	return (b);
}

const	std::string& Weapon::getType()
{
	return (type);
}

void	Weapon::setType(std::string t)
{
	type = t;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 09:48:12 by omoreno-          #+#    #+#             */
/*   Updated: 2023/06/14 13:41:03 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::Zombie(std::string n)
{
	name = n;
}

Zombie::~Zombie()
{
	std::cout << name << " has being destroyed." << std::endl;
}

void Zombie::setName(std::string n)
{
	name = n;
}

void Zombie::announce( void )
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

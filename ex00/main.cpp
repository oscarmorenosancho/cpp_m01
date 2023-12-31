/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 09:46:25 by omoreno-          #+#    #+#             */
/*   Updated: 2023/06/14 12:05:14 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie( std::string name );
void randomChump( std::string name );

int	main(void)
{
	Zombie* zombiePtr = newZombie("Oscarrr");
	zombiePtr->announce();
	randomChump("Oshkaaa");
	delete zombiePtr;
	return (0);
}

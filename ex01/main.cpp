/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 09:46:25 by omoreno-          #+#    #+#             */
/*   Updated: 2023/06/14 12:49:00 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*    zombieHorde(int N, std::string name);

int	main(void)
{
	int amount = 10;
	Zombie* zombies = zombieHorde(amount, "Oscarrr");
	for (int i = 0; i < amount; i++)
		zombies[i].announce();
	delete[] zombies;
	return (0);
}

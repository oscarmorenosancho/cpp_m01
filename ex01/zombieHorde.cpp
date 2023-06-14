/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 10:36:04 by omoreno-          #+#    #+#             */
/*   Updated: 2023/06/14 13:41:49 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*    zombieHorde(int N, std::string name)
{
	Zombie*	zombieArr  = new Zombie[N];
	for (int i = 0; i < N; i++)
		zombieArr[i].setName(name);
	return (zombieArr);
}

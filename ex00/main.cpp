/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 09:46:25 by omoreno-          #+#    #+#             */
/*   Updated: 2023/06/14 10:25:51 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie( std::string name );
void randomChump( std::string name );

int	main(void)
{
	Zombie* zombie_ptr = newZombie("Oscarrr");
	zombie_ptr->announce();
	randomChump("Oshkaaa");
	delete zombie_ptr;
	return (0);
}

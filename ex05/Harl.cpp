/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 17:22:47 by omoreno-          #+#    #+#             */
/*   Updated: 2023/06/15 18:54:32 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl.hpp"

Harl::Harl()
{
	levels[0] = std::string("DEBUG");
	levels[1] = std::string("INFO");
	levels[2] = std::string("WARNING");
	levels[3] = std::string("ERROR");
	logFt[0] = debug;
	logFt[1] = info;
	logFt[2] = warning;
	logFt[3] = error;
}

Harl::~Harl()
{
}

void	Harl::debug( void )
{
	std::cout << "I love having extra bacon for my "
				"7XL-double-cheese-triple-pickle-special- "
				"ketchup burger. I really do!";
	std::cout << std::endl;
}

void	Harl::info( void )
{
	std::cout << "I cannot believe adding extra bacon costs more money. "
				"You didn’t put enough bacon in my burger! "
				"If you did, I wouldn’t be asking for more!";
	std::cout << std::endl;
}

void	Harl::warning( void )
{
	std::cout << "I think I deserve to have some extra bacon for free. "
					"I’ve been coming for years whereas you started "
					"working here since last month.";
	std::cout << std::endl;
}

void	Harl::error( void )
{
	std::cout << "This is unacceptable! I want to speak to the manager now.";
	std::cout << std::endl;
}

void	Harl::unhandledLevel( void )
{
	std::cerr << "Error" << std::endl;
	std::cerr << "Unhandled logging level.";
	std::cerr << std::endl;
}

void	Harl::complain( std::string level )
{
	int	i = 0;
	while (i < 4 && levels[i].compare(level))
		i++;
	if (i < 4)
		logFt[i]();
	else
		unhandledLevel();
}

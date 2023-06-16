/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 17:22:47 by omoreno-          #+#    #+#             */
/*   Updated: 2023/06/16 10:31:54 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl.hpp"

std::string Harl::levels[] = {	"DEBUG", "INFO", "WARNING", "ERROR"};

void (*Harl::logFt [])( Harl* instance )
					= {Harl::debug, Harl::info, Harl::warning,	Harl::error};

Harl::Harl( std::string sn )
{
	serialNb = sn;
}

Harl::~Harl()
{
}

void	Harl::debug( void )
{
	introduce();
	std::cout << "I love having extra bacon for my "
				"7XL-double-cheese-triple-pickle-special- "
				"ketchup burger. I really do!";
	std::cout << std::endl;
}

void	Harl::info( void )
{
	introduce();
	std::cout << "I cannot believe adding extra bacon costs more money. "
				"You didn’t put enough bacon in my burger! "
				"If you did, I wouldn’t be asking for more!";
	std::cout << std::endl;
}

void	Harl::warning( void )
{
	introduce();
	std::cout << "I think I deserve to have some extra bacon for free. "
					"I’ve been coming for years whereas you started "
					"working here since last month.";
	std::cout << std::endl;
}

void	Harl::error( void )
{
	introduce();
	std::cout << "This is unacceptable! I want to speak to the manager now.";
	std::cout << std::endl;
}

void	Harl::unhandledLevel( void )
{
	introduce();
	std::cerr << "Error" << std::endl;
	std::cerr << "Unhandled logging level.";
	std::cerr << std::endl;
}

void	Harl::introduce( void )
{
	std::cout << "Serial " << serialNb << " Harl says: ";
}

void	Harl::debug( Harl* instance )
{
	instance->debug();
}

void	Harl::info( Harl* instance )
{
	instance->info();
}

void	Harl::warning( Harl* instance )
{
	instance->warning();
}

void	Harl::error( Harl* instance )
{
	instance->error();
}

void	Harl::complain( std::string level )
{
	int	i = 0;
	while (i < 4 && levels[i].compare(level))
		i++;
	if (i < 4)
		logFt[i](this);
	else
		unhandledLevel();
}

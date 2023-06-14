/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 09:50:31 by omoreno-          #+#    #+#             */
/*   Updated: 2023/06/14 10:03:09 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ZOMBIE_HPP__
#define __ZOMBIE_HPP__

# include <string>

class Zombie
{
private:
	std::string	name;
public:
	Zombie(std::string name);
	~Zombie();
	void announce( void );
};

#endif //__ZOMBIE_HPP__

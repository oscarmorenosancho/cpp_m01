/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 09:50:31 by omoreno-          #+#    #+#             */
/*   Updated: 2023/06/14 13:41:14 by omoreno-         ###   ########.fr       */
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
	Zombie();
	~Zombie();
	Zombie(std::string n);
	void setName(std::string n);
	void announce( void );
};

#endif //__ZOMBIE_HPP__

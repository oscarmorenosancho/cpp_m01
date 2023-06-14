/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 15:14:15 by omoreno-          #+#    #+#             */
/*   Updated: 2023/06/14 17:54:43 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WEAPON_HPP__
#define __WEAPON_HPP__

# include <string>

class Weapon
{
private:
	std::string type;
public:
	Weapon(const Weapon& w);
	Weapon(const std::string t);
	~Weapon();
	Weapon&	operator=(Weapon& b);
	const	std::string& getType();
	void	setType(std::string t);
};
#endif //__WEAPON_HPP__
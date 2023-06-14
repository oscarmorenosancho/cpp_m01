/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 15:14:07 by omoreno-          #+#    #+#             */
/*   Updated: 2023/06/14 17:47:10 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HUMANB_HPP__
#define __HUMANB_HPP__

# include <string>
# include <iostream>
# include "Weapon.hpp"

class HumanB
{
private:
	std::string name;
	Weapon* weapon;
public:
	HumanB(std::string n);
	~HumanB();
	void			setWeapon(Weapon& w);
	const Weapon&	getWeapon();
	void			attack();
};

#endif //__HUMANB_HPP__

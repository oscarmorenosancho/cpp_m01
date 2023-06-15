/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 17:22:55 by omoreno-          #+#    #+#             */
/*   Updated: 2023/06/15 18:53:00 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HARL_HPP__
#define __HARL_HPP__

# include <string>


class Harl
{
private:
	std::string		levels[4];
	void 			(*logFt [4])();
	static void		debug( void );
	static void		info( void );
	static void		warning( void );
	static void		error( void );
	void			unhandledLevel( void );
public:
	Harl();
	~Harl();
    void	complain( std::string level );
};
#endif //__HARL_HPP__
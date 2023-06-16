/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 17:22:55 by omoreno-          #+#    #+#             */
/*   Updated: 2023/06/16 11:57:31 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HARL_HPP__
#define __HARL_HPP__

# include <string>


class Harl
{
private:
	static std::string		levels[4];
	static void				(*logFt [4])( Harl* instance );
	std::string				serialNb;
	int						filterLevel;
	bool					intro;
	void					debug( void );
	void					info( void );
	void					warning( void );
	void					error( void );
	void					unhandledLevel( void );
	void					introduce( void );
protected:
	static void				debug( Harl* instance );
	static void				info( Harl* instance );
	static void				warning( Harl* instance );
	static void				error( Harl* instance );
public:
	Harl( std::string sn, std::string fl, bool introInit = false);
	~Harl();
    void					complain( std::string level );
};
#endif //__HARL_HPP__
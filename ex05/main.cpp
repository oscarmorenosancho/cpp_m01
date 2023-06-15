/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 17:22:12 by omoreno-          #+#    #+#             */
/*   Updated: 2023/06/15 19:01:33 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <string>
# include "Harl.hpp"

int main(int argc, char **argv)
{
	Harl harl;
	std::string level = "";
	if (argc == 2)
		level = argv[1];
	harl.complain(level);
	return 0;
}

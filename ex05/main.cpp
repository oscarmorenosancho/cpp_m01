/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 17:22:12 by omoreno-          #+#    #+#             */
/*   Updated: 2023/06/16 10:43:37 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <string>
# include "Harl.hpp"

int main(int argc, char **argv)
{
	Harl harl9k("9000");
	Harl harl5("five");
	std::string level = "";
	if (argc == 2)
		level = argv[1];
	harl9k.complain(level);
	harl5.complain("ERROR");
	return 0;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 17:22:12 by omoreno-          #+#    #+#             */
/*   Updated: 2023/06/16 11:57:52 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <string>
# include "Harl.hpp"

int main(int argc, char **argv)
{
	std::string filterLevel = "";
	if (argc == 2)
		filterLevel = argv[1];
	Harl harl("9000", filterLevel, false);
	harl.complain("DEBUG");
	harl.complain("INFO");
	harl.complain("WARNING");
	harl.complain("ERROR");
	return 0;
}

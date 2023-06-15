/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 11:11:04 by omoreno-          #+#    #+#             */
/*   Updated: 2023/06/15 17:14:24 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FileReplace.hpp"

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Usage: " << argv[0];
		std::cout << " filename str_to_find str_to_replace";
		std::cout << std::endl;
		return (1);
	}
	FileReplace fr(argv[1], argv[2], argv[3]);
	return (fr.execute());
}

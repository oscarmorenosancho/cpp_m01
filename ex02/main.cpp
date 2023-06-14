/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 14:53:35 by omoreno-          #+#    #+#             */
/*   Updated: 2023/06/14 15:08:10 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int	main(void)
{
	std::string str("HI THIS IS BRAIN");
	std::string* stringPTR = &str;
	std::string& stringREF = str;
	std::cout << "Address of the string: " << &str <<std::endl;
	std::cout << "Address held by stringPTR: " << stringPTR <<std::endl;
	std::cout << "Address held by stringREF: "<< &stringREF <<std::endl;
	std::cout << "Value of the string: " << str <<std::endl;
	std::cout << "Value pointed to by stringPTR: " << *stringPTR <<std::endl;
	std::cout << "Value pointed to by stringREF: " << stringREF <<std::endl;
	return (0);
}

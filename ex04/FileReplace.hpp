/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileReplace.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 11:20:57 by omoreno-          #+#    #+#             */
/*   Updated: 2023/06/15 13:10:07 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

class FileReplace
{
private:
	std::string _filename;
	std::string _find;
	std::string _replace;
	std::string _content;
	int readFile();
	int doReplacement();
	int	saveResult();
public:
	FileReplace(std::string filename, std::string find, std::string replace);
	~FileReplace();
	int	execute();
};

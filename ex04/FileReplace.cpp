/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileReplace.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 11:20:25 by omoreno-          #+#    #+#             */
/*   Updated: 2023/06/15 13:22:53 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include "FileReplace.hpp"

FileReplace::FileReplace(std::string filename, std::string find, std::string replace)
{
	_filename = filename;
	_find = find;
	_replace = replace;
	_content = "";
}

FileReplace::~FileReplace()
{
}

int FileReplace::readFile()
{
	std::string line;
	std::ifstream myfile;
	myfile.open (_filename, std::ios::in);
	if (!myfile.is_open())
		return (1);
	while (std::getline (myfile, line))
		_content += line + "\n";
	myfile.close();
	return (0);
}

int FileReplace::doReplacement()
{
	return (0);
}

int	FileReplace::saveResult()
{
	std::string outputFilename = _filename + ".output";
	std::ofstream myfile;
	myfile.open (outputFilename, std::ios::out | std::ios::trunc);
	if (!myfile.is_open())
		return (1);
	myfile << _content;
	myfile.close();
	return (0);
}

int	FileReplace::execute()
{
	if (readFile())
		return (1);
	if (doReplacement())
		return (1);
	return (saveResult());
}

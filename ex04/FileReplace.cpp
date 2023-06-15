/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileReplace.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 11:20:25 by omoreno-          #+#    #+#             */
/*   Updated: 2023/06/15 17:21:36 by omoreno-         ###   ########.fr       */
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
	{
		std::cerr << "Error" << std::endl;
		std::cerr << "file: " << _filename << " could not be opened to read";
		std::cerr << std::endl;
		return (2);
	}
	while (std::getline (myfile, line))
		_content += line + "\n";
	myfile.close();
	return (0);
}

int FileReplace::doReplacement()
{
	size_t findLen = _find.length();
	size_t contentLen = _content.length();
	size_t i;
	std::string result("");
	i = 0;
	while (i < contentLen)
	{
		if (_content.substr(i, findLen) == _find)
		{
			result += _replace;
			i+= findLen;
		}
		else
		{
			result += _content[i];
			i++;
		}
	}
	_content = result;
	return (0);
}

int	FileReplace::saveResult()
{
	std::string outputFilename = _filename + ".replace";
	std::ofstream myfile;
	myfile.open (outputFilename, std::ios::out | std::ios::trunc);
	if (!myfile.is_open())
	{
		std::cerr << "Error" << std::endl;
		std::cerr << "file: " << outputFilename << " could not be opened to write";
		std::cerr << std::endl;
		return (3);
	}	
	myfile << _content;
	myfile.close();
	return (0);
}

int	FileReplace::execute()
{
	int result = readFile();
	if (result)
		return (result);
	result = doReplacement();
	if (result)
		return (result);
	return (saveResult());
}

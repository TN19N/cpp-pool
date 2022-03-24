/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mannouao <mannouao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 14:41:47 by mannouao          #+#    #+#             */
/*   Updated: 2022/03/24 20:14:31 by mannouao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <fstream>
# include <string>

int main(int ac, char *av[])
{
	std::ifstream	in_fs;
	std::ofstream	out_fs;
	std::string		in_file;
	std::string		out_file;
	std::string		to_change;
	std::string		to_change_to;
	std::string		buffer;
	size_t			start_pos;

	if (ac != 4)
	{
		std::cout << "usage: ./replace (file name) (to change) (to change to)" << std::endl;
		return (1);
	}
	in_file = av[1];
	to_change = av[2];
	to_change_to = av[3];
	out_file = in_file + ".replace";
	if (in_file.empty() || to_change.empty() || to_change_to.empty())
	{
		std::cout << "you entred an empty arguments" << std::endl;
		return (1);
	}
	in_fs.open(in_file.c_str());
	if (!in_fs)
	{
		std::cout << "no such file to read frome" << std::endl;
		return (1);
	}
	out_fs.open(out_file.c_str());
	while (std::getline(in_fs, buffer))
	{
		start_pos = buffer.find(to_change, 0);
		if (start_pos != std::string::npos)
		{
			buffer.erase(start_pos, to_change.length());
			buffer.insert(start_pos, to_change_to.c_str(), to_change_to.length());
		}
		out_fs << buffer;
		if (!in_fs.eof())
			out_fs << std::endl;
	}
	in_fs.close();
	out_fs.close();
}
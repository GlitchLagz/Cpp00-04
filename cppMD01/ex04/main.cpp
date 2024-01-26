#include "Sed.hpp"

int err_msg(int nb)
{
	if (nb == 0)
		std::cerr << "Wrong NUM of args" << std::endl;
	else if (nb == 1)
		std::cerr << "Err : input file" << std::endl;
	else if (nb == 2)
		std::cerr << "Err : output file" << std::endl;
	return (1);
}

void str_rep(std::ofstream &outfile, std::string s1, std::string s2, std::string buff)
{
	size_t pos, new_pos;

	pos = buff.find(s1);
	if(pos == std::string::npos)
	{
		outfile << buff;
		return ;
	}
	else
	{
		outfile << buff.substr(0, pos);
		outfile << s2;
		new_pos = pos + s1.length();
		str_rep(outfile, s1, s2, buff.substr(new_pos));
	}
}

int	main (int argc, char **argv)
{
	std::string  buff, file, file_rep;
	std::ifstream infile;
	std::ofstream outfile;

	if (argc != 4)
		return (err_msg(0));
	file = argv[1];
	infile.open(file.c_str());
	if (infile.good() == false)
		return (err_msg(1));
	file_rep = file + ".replace";
	outfile.open(file_rep.c_str());
	if (outfile.good() == false)
	{
		outfile.close();
		return (err_msg(2));
	}
	while (getline(infile, buff))
		str_rep(outfile, argv[2], argv[3], buff + '\n');
	infile.close();
	outfile.close();
	return (0);
}
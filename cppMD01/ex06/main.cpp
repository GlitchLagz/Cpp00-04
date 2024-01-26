#include "Harl.hpp"

int	arg_err(void)
{
	std::cout << "wrong number of arguments" << std::endl;
	return (1);
}

int main (int argc, char **argv)
{
	Harl Harl;
	int lvl;

	if (argc != 2)
		return (arg_err());
	lvl = getLvl(argv[1]);
	switch(lvl)
	{
		case 0:
			Harl.complain("DEBUG");
			std::cout << std::endl;
		case 1:
			Harl.complain("INFO");
			std::cout << std::endl;
		case 2:
			Harl.complain("WARNING");
			std::cout << std::endl;
		case 3:
			Harl.complain("ERROR");
			std::cout << std::endl;
			break ;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			std::cout << std::endl;
	}
	return (0);
}
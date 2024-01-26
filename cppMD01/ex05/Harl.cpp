#include "Harl.hpp"

Harl::Harl()
{
	return ;
}

Harl::~Harl()
{
	return ;
}

void Harl::error(void) const
{
	std::cout << "[ERROR] This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::warning(void) const
{
	std::cout << "[WARNING] I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::info(void) const
{
	std::cout << "[INFO] I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::debug(void) const
{
	std::cout << "[DEBUG] I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

int getLvl(std::string lvl)
{
	int lvl_nb = 4;
	const std::string lvls[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	
	for (int i = 0; i < 4 && lvl_nb == 4; i++)
		if (lvl == lvls[i])
			lvl_nb = i;
	return (lvl_nb);
}

void Harl::complain(std::string lvl) const
{
	const fptr complaints[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	int	lvl_nb = getLvl(lvl);

	if (lvl_nb < 4)
		(this->*(complaints[lvl_nb]))();
	else
		std::cout << "Invalid Level, go again" << std::endl;
}
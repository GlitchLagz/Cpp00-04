#include "FragTrap.hpp"

FragTrap::FragTrap() :
	ClapTrap("", 100, 100, 30)
{
	std::cout << "FragTrap Spawned!" << std::endl;
}

FragTrap::FragTrap(std::string name) : 
	ClapTrap(name, 100, 100, 30)
{
	std::cout << "Fragtrap " << _name << " Spawned!" << std::endl;
}

FragTrap::FragTrap(FragTrap const &src)
{
	operator=(src);
}

FragTrap& FragTrap::operator=(const FragTrap &src)
{
	if (this == &src)
		return *this;
	_name = src._name;
	_dmg = src._dmg;
	_ep = src._ep;
	_hp = src._hp;
	return *this;
}

FragTrap::~FragTrap()
{
	std::cout << "Fragtrap " << _name << " Despawned!" << std::endl;
}

void FragTrap::highFiveGuys()
{
	std::cout << "High Five Guys!" << std::endl;
}
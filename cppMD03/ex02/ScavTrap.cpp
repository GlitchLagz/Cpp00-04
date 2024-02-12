#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("", 100, 50, 20)
{
	std::cout << "ScavTrap Spawned" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 50, 20)
{
	std::cout << "ScavTrap " << _name << " Spawned!" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &src)
{
	operator=(src);
}

ScavTrap& ScavTrap::operator=(const ScavTrap &src)
{
	if (this == &src)
		return *this;
	_name = src._name;
	_dmg = src._dmg;
	_ep = src._ep;
	_hp = src._hp;
	return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << _name << " Despawned!" << std::endl;
}

void ScavTrap::attack(std::string const &target)
{
	if (this->_ep <= 0)
	{
		std::cout << "ScavTrap " << _name << " has no EP to attack" << std::endl;
		return ;
	}
	if (this->_hp <= 0)
	{
		std::cout << "ScavTrap " << _name << " is dead and cant attack" << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << _name << " Attacks " << target << " for " << _dmg << " amounts of damage" << std::endl;
	this->_ep -= 1;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << _name << " has entered GateKeeper mode" << std::endl;
}
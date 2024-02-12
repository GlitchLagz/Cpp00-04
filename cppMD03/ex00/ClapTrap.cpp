#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	this->_hp = 10;
	this->_ep = 10;
	this->_dmg = 0;
	this->_name = "";
	std::cout << "ClapTrap Spawned!" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hp(10), _ep(10), _dmg(0)
{
	std::cout << "ClapTrap " << _name << " Spawned!" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &src)
{
	operator=(src);
}

ClapTrap& ClapTrap::operator=(const ClapTrap &src)
{
	if (this == &src)
		return *this;
	_name = src._name;
	_dmg = src._dmg;
	_ep = src._ep;
	_hp = src._hp;
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << _name << " Despawned" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
		if (this->_ep <= 0)
	{
		std::cout << "ClapTrap " << _name << " cannot attack due to lack of ep"  << std::endl;
		return ;
	}
	if (this->_hp <= 0)
	{
		std::cout << "ClapTrap " << _name << " cannot attack due to being dead"  << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << _name << " attacks " << target << " for " << _dmg << " amount of dmg"  << std::endl;
	this->_ep -= 1;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (_hp <= 0)
	{
		std::cout << "ClapTrap " << _name << " is already dead, leave his corpse alone"  << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << _name << " takes " << amount << " amounts of damage"  << std::endl;
	this->_hp -= amount;
	if (this->_hp <= 0)
		std::cout << "ClapTrap " << _name << " fucking died, look what you've done"  << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_ep <= 0)
	{
		std::cout << "ClapTrap " << _name << " cannot repair due to lack of ep"  << std::endl;
		return ;
	}
	if (this->_hp <= 0)
	{
		std::cout << "ClapTrap " << _name << " cannot repair due to being dead"  << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << _name << " repairs " << amount << " amounts of hp"  << std::endl;
	this->_hp += amount;
	this->_ep -= 1;
}
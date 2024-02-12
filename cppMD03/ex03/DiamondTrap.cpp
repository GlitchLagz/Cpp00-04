#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap():
	ClapTrap("_clap_name", 100, 50, 30)
{
	std::cout << "DiamondTrap Has Spawned!" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name):
	ClapTrap(name + "_clap_name", 100, 50, 30)
{
	this->_name = name;
	std::cout << "DiamondTrap " << name << " Has Spawned!" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &src)
{
	operator=(src);
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &src)
{
	if (this == &src)
		return *this;
	ClapTrap::operator=(src);
	_name = src._name;
	return *this;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << _name << " Has Despawned!" << std::endl;
}

void DiamondTrap::display(std::ostream& stream) const
{
	stream << "I am " << _name << "/" << ClapTrap::_name << " with hp: " << _hp << ", ep: " << _ep << " and dmg: " << _dmg;
}

void DiamondTrap::whoAmI() const
{
	std::cout << *this << std::endl;
}

void DiamondTrap::attack(std::string const &target)
{
	ScavTrap::attack(target);
}

std::ostream& operator<<(std::ostream& stream, DiamondTrap const &src)
{
	src.display(stream);
	return (stream);
}
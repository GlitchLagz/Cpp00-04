#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap	a;
	ScavTrap	b("One");
	ClapTrap	c("Jeff");
	
	c.takeDamage(29);
	b.takeDamage(29);
	b.attack("Handsome Jack");
	b.beRepaired(10);
	b.guardGate();
	b.attack("Handsome Jack");
	b.takeDamage(100);
	b.takeDamage(3);
}
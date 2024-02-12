#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap	a;
	ClapTrap	b("One");

	b.takeDamage(3);
	b.takeDamage(3);
	b.beRepaired(6);
	b.takeDamage(5);
	b.attack("Handsome Jack");
	b.attack("Handsome Jack");
	b.attack("Handsome Jack");
	b.beRepaired(6);
	b.attack("Handsome Jack");
	b.attack("Handsome Jack");
	b.attack("Handsome Jack");
	b.attack("Handsome Jack");
	b.attack("Handsome Jack");
	b.attack("Handsome Jack");
	b.takeDamage(100);
	b.takeDamage(3);
}
#include "FragTrap.hpp"

int main(void)
{
	FragTrap	a;
	FragTrap	b("Tester");
	ClapTrap	c("Jeff");
	ScavTrap	d("Gonnie");
	
	c.takeDamage(29);
	b.takeDamage(29);
	b.attack("Handsome Jack");
	b.beRepaired(10);
	//b.guardGate();
	b.highFiveGuys();
	b.attack("Handsome Jack");
	b.takeDamage(100);
	b.takeDamage(3);
}
#include "DiamondTrap.hpp"

int main(void)
{
	DiamondTrap	b("Tester");
	
	b.whoAmI();
	b.takeDamage(29);
	b.attack("Handsome Jack");
	b.beRepaired(10);
	b.guardGate();
	b.whoAmI();
	b.attack("Handsome Jack");
	b.takeDamage(100);
	b.takeDamage(3);
}
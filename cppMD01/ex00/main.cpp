#include "Zombie.hpp"

int main(void)
{
	Zombie *zom;
	Zombie jim("Jim");
	zom = newZombie("John");
	randomChump("James");
	jim.announce();
	zom->announce();
	
	delete zom;
	return 0;
}
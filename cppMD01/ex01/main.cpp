#include "Zombie.hpp"

int main(void)
{
	Zombie *horde;
	int n = 10;

	horde = zombieHorde(n, "zombie");
	for (int i = 0; i < n; i++)
	{
		std::cout << i + 1;
		horde[i].announce();
	}
	delete [] horde;
	return (0);
}
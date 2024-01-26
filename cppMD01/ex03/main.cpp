#include "HumanA.hpp"
#include "HumanB.hpp"

//better to use referance when Weapon is not expected to change
//after being constructed
//ptr for working with dynamically allced objects that change throughout the objects lifetime

int main()
{
    {
        Weapon club = Weapon("crude spiked club");
        
		HumanA bob("Bob", club);
        bob.attack();
        club.setType("some other type of club");
        bob.attack();
    }
    {
        Weapon club = Weapon("crude spiked club");
        
		HumanB jim("Jim");
        jim.setWeapon(club);
        jim.attack();
        club.setType("some other type of club");
        jim.attack();
    }
	return (0);
}
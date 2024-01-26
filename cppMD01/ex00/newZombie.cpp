#include "Zombie.hpp"

Zombie* newZombie(std::string name)
{
    Zombie *new_zom = new Zombie;
    new_zom->set_name(name);
    return(new_zom);
}
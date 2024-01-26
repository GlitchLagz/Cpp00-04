#include "Zombie.hpp"

Zombie::Zombie(void)
{
    this->_name = "unnamed";
}
Zombie::Zombie(std::string name)
{
    this->_name = name;
}
Zombie::~Zombie(void)
{
    std::cout << this->_name << std::endl;
}
void Zombie::announce(void)
{
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
void Zombie::set_name(std::string name)
{
    this->_name = name;
}
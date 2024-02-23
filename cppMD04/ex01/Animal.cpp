#include "Animal.hpp"

Animal::Animal()
{
	this->type = "Animal";
	std::cout << "Animal Constructed" << std::endl;
}

Animal& Animal::operator=(const Animal &src)
{
	if (this == &src)
		return *this;
	type = src.type;
	return *this;
}

Animal::Animal(const Animal &src)
{
	operator=(src);
}

Animal::~Animal()
{
	std::cout << "Animal Destructed" << std::endl;
}

void Animal::makeSound() const
{
	std::cout << "Random Animal Noise" << std::endl;
}

std::string const Animal::getType() const
{
	return this->type;
}

std::string const Animal::addIdea(const std::string idea)
{
	std::cout << "Animal has no brain" << std::endl;
	return idea;
}

std::string const Animal::thinkIdea()
{
	std::cout << "Animal has no brain" << std::endl;
	return "Animal has no brain";
}
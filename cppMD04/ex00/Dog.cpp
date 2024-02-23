#include "Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
	std::cout << "Dog Constructed" << std::endl;
}

Dog& Dog::operator=(const Dog &src)
{
	if (this == &src)
		return *this;
	type = src.type;
	return *this;
}

Dog::Dog(const Dog &src)
{
	operator=(src);
}

Dog::~Dog()
{
	std::cout << "Dog Destructed" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "WOOF BARK" << std::endl;
}

std::string const Dog::getType() const
{
	return this->type;
}
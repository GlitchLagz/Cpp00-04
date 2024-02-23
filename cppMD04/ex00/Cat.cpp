#include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	std::cout << "Cat Constructed" << std::endl;
}

Cat& Cat::operator=(const Cat &src)
{
	if (this == &src)
		return *this;
	type = src.type;
	return *this;
}

Cat::Cat(const Cat &src)
{
	operator=(src);
}

Cat::~Cat()
{
	std::cout << "Cat Destructed" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "MEOW PURR!" << std::endl;
}

std::string const Cat::getType() const
{
	return this->type;
}
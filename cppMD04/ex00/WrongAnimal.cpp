#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	this->type = "WrongAnimal";
	std::cout << "WrongAnimal Constructed" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &src)
{
	if (this == &src)
		return *this;
	type = src.type;
	return *this;
}

WrongAnimal::WrongAnimal(const WrongAnimal &src)
{
	operator=(src);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Destructed" << std::endl;
}

void WrongAnimal::makeSound() const
{
	std::cout << "*Wrong Animal Sounds*" << std::endl;
}

std::string const WrongAnimal::getType() const
{
	return this->type;
}

WrongCat::WrongCat()
{
	this->type = "WrongCat";
	std::cout << "WrongCat Constructed" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat &src)
{
	if (this == &src)
		return *this;
	type = src.type;
	return *this;
}

WrongCat::WrongCat(const WrongCat &src)
{
	operator=(src);
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat Destructed" << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "QUACK" << std::endl;
}

std::string const WrongCat::getType() const
{
	return this->type;
}
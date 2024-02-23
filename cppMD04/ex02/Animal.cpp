#include "Animal.hpp"

AAnimal::AAnimal()
{
	this->type = "AAnimal";
	std::cout << "AAnimal Constructed" << std::endl;
}

AAnimal& AAnimal::operator=(const AAnimal &src)
{
	if (this == &src)
		return *this;
	type = src.type;
	return *this;
}

AAnimal::AAnimal(const AAnimal &src)
{
	operator=(src);
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal Destructed" << std::endl;
}

// void AAnimal::makeSound() const
// {
// 	std::cout << "Random AAnimal Noise" << std::endl;
// }

std::string const AAnimal::getType() const
{
	return this->type;
}

std::string const AAnimal::addIdea(const std::string idea)
{
	std::cout << "AAnimal has no brain" << std::endl;
	return idea;
}

std::string const AAnimal::thinkIdea()
{
	std::cout << "AAnimal has no brain" << std::endl;
	return "AAnimal has no brain";
}
#include "Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
	this->_brain = new Brain();
	std::cout << "Dog Constructed" << std::endl;
}

Dog& Dog::operator=(const Dog &src)
{
	if (this == &src)
		return *this;
	type = src.type;
	_brain = new Brain(*src._brain);
	return *this;
}

Dog::Dog(const Dog &src)
{
	operator=(src);
}

Dog::~Dog()
{
	delete _brain;
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

std::string const Dog::addIdea(std::string idea)
{
	_brain->addIdea(idea);
	return idea;
}

std::string const Dog::thinkIdea()
{
	std::cout << _brain->ideas[0] << std::endl;
	return _brain->ideas[0];
}
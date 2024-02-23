#include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	this->_brain = new Brain();
	std::cout << "Cat Constructed" << std::endl;
}

Cat& Cat::operator=(const Cat &src)
{
	if (this == &src)
		return *this;
	type = src.type;
	_brain = new Brain(*src._brain);
	return *this;
}

Cat::Cat(const Cat &src) : AAnimal(src)
{
	operator=(src);
}

Cat::~Cat()
{
	delete _brain;
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

std::string const Cat::addIdea(std::string const idea)
{
	_brain->addIdea(idea);
	return idea;
}

std::string const Cat::thinkIdea()
{
	std::cout << _brain->ideas[0] << std::endl;
	return _brain->ideas[0];
}
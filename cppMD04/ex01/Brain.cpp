#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain Created" << std::endl;
	i = 0;
}

Brain& Brain::operator = (const Brain &src)
{
	 *this->ideas = *src.ideas;
	 return *this;
}

Brain::Brain (const Brain &src)
{
	operator=(src);
}

Brain::~Brain()
{
	std::cout << "Brain Destroyed" << std::endl;
}

const std::string Brain::addIdea(std::string const idea)
{
	this->ideas[i] = idea;
	i++;
	return idea;
}
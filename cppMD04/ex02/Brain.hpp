#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <iostream>
# include <string>

class Brain
{
	public:
	Brain();
	Brain(const Brain &src);
	Brain& operator = (const Brain &src);
	~Brain();

	std::string ideas[100];
	int i;
	const std::string addIdea(std::string const idea);
};

#endif
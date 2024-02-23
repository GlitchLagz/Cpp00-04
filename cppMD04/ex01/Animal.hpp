#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>
# include <string>
# include "Brain.hpp"

class Animal{

	protected:		
		std::string type;
	public:
		
		Animal();
		Animal& operator=(Animal const &src);
		Animal(Animal const &src);
		virtual ~Animal();
		
		virtual void makeSound() const;
		const virtual std::string getType(void) const;
		virtual std::string const addIdea(const std::string idea);
		virtual std::string const thinkIdea();
	private:
};

#endif
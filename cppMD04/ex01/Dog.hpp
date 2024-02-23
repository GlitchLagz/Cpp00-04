#ifndef DOG_HPP
# define DOG_HPP
# include <iostream>
# include "Animal.hpp"

class Dog : public Animal
{
	private:
		Brain *_brain;
	public:
		
		Dog();
		Dog& operator=(Dog const &src);
		Dog(Dog const &src);
		~Dog();

		virtual void makeSound() const;
		const virtual std::string getType(void) const;
		std::string const addIdea(std::string const idea);
		std::string const thinkIdea();

};

#endif
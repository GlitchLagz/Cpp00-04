#ifndef DOG_HPP
# define DOG_HPP
# include <iostream>
# include "Animal.hpp"

class Dog : public Animal
{
	public:
		
		Dog();
		Dog& operator=(Dog const &src);
		Dog(Dog const &src);
		~Dog();

		virtual void makeSound() const;
		const virtual std::string getType(void) const;

};

#endif
#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>
# include <string>

// the superclass can be overridden in the subclass to provide specialized behavior

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
};

#endif
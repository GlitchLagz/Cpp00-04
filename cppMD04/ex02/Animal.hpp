#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>
# include <string>
# include "Brain.hpp"

class AAnimal{

	protected:		
		std::string type;
	public:
		
		AAnimal();
		AAnimal& operator=(AAnimal const &src);
		AAnimal(AAnimal const &src);
		virtual ~AAnimal();
		
		//missing behaviour to turn class abstract;
		virtual void makeSound() const = 0;
		const virtual std::string getType(void) const;
		
		std::string const addIdea(const std::string idea);
		std::string const thinkIdea();
	private:
};

#endif
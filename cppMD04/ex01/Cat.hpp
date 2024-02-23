#ifndef CAT_HPP
# define CAT_HPP
# include <iostream>
# include "Animal.hpp"

class Cat : public Animal
{
	private:
		Brain *_brain;
	public:
		Cat();
		Cat& operator=(Cat const &src);
		Cat(Cat const &src);
		~Cat();

		virtual void makeSound() const;
		const virtual std::string getType(void) const;
		std::string const addIdea(std::string const idea);
		std::string const thinkIdea();

};

#endif
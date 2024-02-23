#ifndef CAT_HPP
# define CAT_HPP
# include <iostream>
# include "Animal.hpp"

class Cat : public Animal
{
	public:
		
		Cat();
		Cat& operator=(Cat const &src);
		Cat(Cat const &src);
		~Cat();

		virtual void makeSound() const;
		const virtual std::string getType(void) const;

};

#endif
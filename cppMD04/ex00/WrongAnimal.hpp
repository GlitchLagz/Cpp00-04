#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
# include <iostream>
# include "Animal.hpp"

class WrongAnimal
{
	protected:
		
		std::string type;

	public:
		
		WrongAnimal();
		WrongAnimal& operator=(WrongAnimal const &src);
		WrongAnimal(WrongAnimal const &src);
		~WrongAnimal();

		void makeSound() const;
		const std::string getType(void) const;
};

class WrongCat : public WrongAnimal
{
	public:
	 	WrongCat();
		WrongCat& operator=(WrongCat const &src);
		WrongCat(WrongCat const &src);
		~WrongCat();

		void makeSound() const;
		const std::string getType(void) const;
};

#endif
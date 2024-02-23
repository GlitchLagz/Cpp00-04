#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	//AAnimal *bad  = new AAnimal();
	//AAnimal bad2;
	AAnimal *good = new Dog();
	delete good;

	// ex01 tests

	// AAnimal*	animals[6];
	// for (int i = 0; i < 3; i++)
	// 	animals[i] = new Dog();
	// for (int i = 3; i < 6; i++)
	// 	animals[i] = new Cat();
	// Dog	*origin = new Dog();
	// origin->addIdea("MUST EAT CAT");
	// Dog *copy = new Dog(*origin);
	// std::cout << copy->getType() << std::endl;
	// copy->thinkIdea();
	// delete origin;
	// delete copy;
	// for (int i = 5; i > -1; i--)
	// 	delete animals[i];
	// return 0;
}
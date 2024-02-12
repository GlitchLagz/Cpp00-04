#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>


class ClapTrap{
	protected:
		std::string _name;
		int _hp;
		int _ep;
		int _dmg;
		
	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(std::string name, int hp, int ep, int dmg);
		ClapTrap(const ClapTrap &src);
		ClapTrap& operator=(const ClapTrap &src);
		~ClapTrap();

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};
#endif
#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include "ScavTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(FragTrap const &src);
		FragTrap& operator=(const FragTrap &src);
		~FragTrap();
		void highFiveGuys();
		
};

#endif
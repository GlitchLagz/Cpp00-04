#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include "ClapTrap.hpp"
# include <string>

class FragTrap : public virtual ClapTrap
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
#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
	public:
		DiamondTrap();
		DiamondTrap(std::string name);
		DiamondTrap& operator=(DiamondTrap const &src);
		DiamondTrap(DiamondTrap const &src);
		~DiamondTrap();

		void attack(std::string const &target);
		void whoAmI() const;
		void display(std::ostream& stream) const;

	private:
		std::string	_name;
};

std::ostream& operator<<(std::ostream &stream, DiamondTrap const &src);

#endif
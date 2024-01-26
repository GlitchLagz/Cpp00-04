#ifndef HARL_HPP
# define HARL_HPP
# include <iostream>

class Harl
{
	private: 
		void debug(void) const;
		void info(void) const;
		void warning(void) const;
		void error(void) const;

	public:
		void complain(std::string lvl) const;
		Harl();
		~Harl();
};

typedef void (Harl::*fptr)(void) const;
int getLvl(std::string lvl);

#endif
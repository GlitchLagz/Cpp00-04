#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include <iostream>
# include <cstdlib>
# include <thread>
# include <string>

class Contact
{
	public:
	std::string t_first;
	std::string t_last;
	std::string t_nick;
	std::string t_num;
	std::string t_secret;

	std::string getfirst();
	std::string getlast();
	std::string getnick();
	std::string getnum();
	std::string getsecret();
 
	Contact();
	Contact(std::string first, 
		std::string last,
		std::string nick, 
		std::string num,
		std::string secret);
};

class PhoneBook
{
	public:
	Contact baka[8];
	int	used;
	int latest;
	PhoneBook();
	void Add(Contact contact);

	void OptionsAdd();
	void OptionsSearch();
};
#endif
#include "phonebook.hpp"
#include <cstdlib>
#include <iostream>
#include <sstream>

PhoneBook::PhoneBook() : used(0), latest(0)
{

}
Contact::Contact(): 	t_first(""),
						t_last(""),
						t_nick(""),
						t_num(""),
						t_secret("")
{

}

Contact::Contact(std::string first, 
			std::string last,
			std::string nick, 
			std::string num,
			std::string secret):
			t_first(first),
			t_last(last),
			t_nick(nick),
			t_num(num),
			t_secret(secret)
{

}
std::string Contact::getfirst()
{
	return (this->t_first);
}

std::string Contact::getlast()
{
	return (this->t_last);
}

std::string Contact::getnick()
{
	return (this->t_nick);
}

std::string Contact::getnum()
{
	return (this->t_num);
}

std::string Contact::getsecret()
{
	return (this->t_secret);
}



void PhoneBook::Add(Contact contact)
{
	this->baka[latest] = contact;
	if (used < 8)
		used++;
	latest++;
	latest %= 8;
}

std::string Prompt(std::string in = "")
{
	std::string tmp;
	while (tmp.empty())
	{
		std::cout << in;
		getline(std::cin, tmp);
		if (!tmp.empty())
			return(tmp);
		std::cout << "Cannot Be Empty" << std::endl;
	}
	return (tmp);
}
void PhoneBook::OptionsAdd()
{
	system("clear");
	std::cout << "\033[1;36mEnter: First name * Last name * Nick name * Number * Secret \033[1;33m" << std::endl;
	std::string first = Prompt("First name:");
	std::string last = Prompt("Last name:");
	std::string nick = Prompt("Nickname:");
	std::string num = Prompt("Number:");
	std::string secret = Prompt("Secret:");
	std::cout << "\033[1;36mThanks for adding your Contact!" << std::endl;
	std::this_thread::sleep_for(std::chrono::seconds(2));
	Add(Contact(first, last, nick, num, secret));
}

void print (std::string pre, std::string tmp, std::string nxt = "")
{
	unsigned long width = 10;
	if (tmp.length() > width)
	{
		tmp.resize(width);
		tmp[9] = '.';
	}
	std::cout << pre << std::string(width - tmp.length(), ' ') << tmp << nxt;
}
void PhoneBook::OptionsSearch()
{
	system("clear");
	std::string vars[] = {"Index", "First Name", "Last Name", "Nickname" };
	int i = -1;
	while (++i < 4)
		print("|", vars[i]);
	std::cout << "|" << std::endl;
	for (i = 0; i < 8; i++)
	{
		Contact baka = this->baka[i];
		std::ostringstream tmp;
		tmp << i + 1;
		print("|", tmp.str());
		print("|", baka.getfirst());
		print("|", baka.getlast());
		print("|", baka.getnick(), "|");
		std::cout << std::endl;
	}
	char *flag;
	std::string in = Prompt("Enter Index To Display:");
	long index = strtol(in.c_str(), &flag, 10);
	if (*flag)
	{
		std::cout << "Not a number" << std::endl;
		return ;
	}
	if (index <= 0 || index > 8)
	{
		std::cout << "Out of range" << std::endl;
		return ;
	}
	std::cout << "\033[1;32mFirst name:\t" << baka[index - 1].getfirst() << std::endl;
	std::cout << "\033[1;32mLast name:\t" << baka[index - 1].getlast() << std::endl;
	std::cout << "\033[1;32mNickname:\t" << baka[index - 1].getnick() << std::endl;
	std::cout << "\033[1;32mNumber:\t\t" << baka[index - 1].getnum() << std::endl;
	std::cout << "\033[1;32mSecret:\t\t" << baka[index - 1].getsecret() << std::endl;
	while (1)
	{
		std::string in;
		std::cout << "\033[1;36mtype DONE  when finished:\033[1;33m";
		std::cin >> in;
		getline(std::cin, in);
		std::cout << std::endl;
		if (in.compare("DONE"))
			break;
	}
}

int main (void)
{
	PhoneBook PB = PhoneBook();
	std::string in;
	while (1)
	{
		system("clear");
		std::cout << "\033[1;32m* \033[1;36mADD or SEARCH a Contact. EXIT if done \033[1;32m*\033[1;33m" << std::endl;
		getline(std::cin, in);
		if (in == "ADD")
			PB.OptionsAdd();
		if (in == "SEARCH")
			PB.OptionsSearch();
		if (in == "EXIT")
			break ;
		in = "GO AGANE";
	}
	return (0);
}
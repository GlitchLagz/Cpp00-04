#include <iostream>

int main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *ptr = &str;
	std::string &ref = str;

	std::cout << "str's address (&str): " << &str << std::endl;
	std::cout << "ptr: " << ptr << std::endl;
	std::cout << "ref: " << ref << std::endl;
	std::cout << "str's content: " << str << std::endl;
	std::cout << "*ptr: "<< *ptr << std::endl;
	std::cout << "&ref: " << &ref << std::endl;

	return (0);
}
#include <iostream>
#include <cctype>

int	arg_size(char **argv, int k, int i)
{
	int c = 0;
	while(argv[++k] != nullptr)
	{
		while(argv[k][i++])
			c++;
		i = 0;
	}
	return (c);
}

int main(int argc, char **argv)
{
	int i = 0, j = 0, k = 0;
	int b = arg_size(argv, k, i) + 1;
	char *buff = new char[b];

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		while (argv[++k] != nullptr)
		{
			while (argv[k][j])
				buff[i++] = toupper(argv[k][j++]);
			j = 0;
		}
		buff[i] = '\0';
		std::cout << buff << std::endl;
		delete[] buff;
	}
	return (0);
}

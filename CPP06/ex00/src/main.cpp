#include "ScalarConverter.hpp"

int main(int ac, char **av)
{
	if (ac != 2 )
	{
		std::cerr << "Bad number of args" << std::endl;
		return (0);
	}
	
	std::string str = (std::string)av[1];
	if (ScalarConverter::is_valid(str)){
		conversion_of_scalar_types(str);
	}
	else
		std::cerr << "Invalid" << std::endl;
}
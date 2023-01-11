#include <iostream>

int main(int ac, char **av)
{
    int i = 0, n = -1;
    if(ac == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
        return(0);
    }
	while(av[++i]){
		n = -1;
        while(av[i][++n] && ac >= 2){
            if(av[i][n] <= 'z' && av[i][n] >= 'a')
                std::cout << (char)std::toupper(av[i][n]);
            else
                std::cout << av[i][n];
    	}
		if(av[i + 1])
			std::cout << " ";
	}
}

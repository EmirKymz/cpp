#include "phonebook.hpp"

std::string takestring(std::string input)
{
    std::cin.clear();
    fflush(stdin);
    std::cin >> input;
    return (input);
}

void checkerv1(phonebook *book)
{
	std::cout << "Please press num" << std::endl;
	int i = book->getnuminput();
	if(i < book->index)
	{
		std::cout << book->people[i].get_name() << "\n";
		std::cout << book->people[i].get_surname() << "\n";
		std::cout << book->people[i].get_nick() << "\n";
		std::cout << book->people[i].get_num() << "\n";
		std::cout << book->people[i].get_secret() << "\n";
	}
}

void go_add(phonebook *book)
{

	std::string input;
	std::string a;

	if(book->index < 8){
		std::cout << "Please write Name : ";
		book->people[book->index].set_name(takestring(input));
		
		std::cout << "\n" << "Please write Surname : ";
		book->people[book->index].set_surname(takestring(input));
		
		std::cout << "\n" << "Please write Nickname : ";
		book->people[book->index].set_nick(takestring(input));
		
		std::cout << "\n" << "Please write Phone Number: ";
		book->people[book->index].set_num(takestring(input));
		
		std::cout << "\n" << "Please write Darkest Secret : ";
		book->people[book->index].set_secret(takestring(input));

		std::cout << "\n" << "contact added successfully \n";
		book->index++;
	}
	else
		return ;
}

int phonebook::getnuminput()
{
    int a;
    std::cin >> a;
    if (std::cin.fail())
    {
        std::cout << "Wrong Choice. Enter again " << std::endl;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return (-1);
    }
    return (a);
}

int go_start(phonebook *book)
{
    int a = 0;
	std::cout << "_______________________" << std::endl;
    std::cout << "1 : Add New Contact\n2 : Search(right now checker button)\n3 : Exit \n Please press 1 - 3 number\n" << std::endl;
    a = book->getnuminput();
	if(a == -1)
		return (1);
    switch (a)
    {
    case 1:
    {
        go_add(book);
        break;
    }
    case 2:
    {
		checkerv1(book);
        //go_search();
        break;
    }
	case 3:
	{
		return (0);
	}
	default:
	{
		std::cout << "Wrong input please press 1 or 2 or 3 !\n\n" << std::endl;
        return (1);
	}
    }
	return(1);
}

int main()
{
	phonebook book;
	book.index = 0;

	while (1)
	{
		if(!go_start(&book))
			break ;
		else
			continue;
	}
}
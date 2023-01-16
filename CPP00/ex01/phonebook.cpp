#include "phonebook.hpp"

std::string contact::get_name() {return (this->first_name);}
std::string contact::get_surname() {return (this->surname);}
std::string contact::get_nick() {return (this->nickname);}
std::string contact::get_num() {return (this->phone_number);}
std::string contact::get_secret() {return (this->darkest_secret);}

bool	contact::set_name(std::string _name) 
{
    if(_name == "")
        return(0);
    else
        this->first_name = _name;
    return (1);
}
void	contact::set_surname(std::string _surname) {this->surname = _surname;}
void	contact::set_nick(std::string _nick) {this->nickname = _nick;}
void	contact::set_num(std::string _num) {this->phone_number = _num;}
void	contact::set_secret(std::string _secret) {this->darkest_secret = _secret;}

void phonebook::add()
{
a:
	std::cout << "Please write Name : ";
    if (!people[index].set_name(takestring()))
    {
        std::cout << "You have to submit a name" << std::endl;
        goto a;
    }
	std::cout << "Please write Surname : "; people[index].set_surname(takestring());
	std::cout << "Please write Nickname : "; people[index].set_nick(takestring());
	std::cout << "Please write Phone Number: "; people[index].set_num(takestring());
	std::cout << "Please write Darkest Secret : "; people[index].set_secret(takestring());
    std::cout << "\n===Contact added successfully===\n";
	index++;
    if (fixed <= 7)
        fixed++;
    if (index == 8)
        this->index = 0;
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

std::string phonebook::takestring()
{
    std::string str;
    std::cin.clear();
    fflush(stdin);
    std::getline(std::cin, str);
    return (str);
}

void phonebook::printbook()
{
    std::cout << "___________________________________________________________________" << std::endl;
    std::cout << "|     Index|      Name|   Surname|  Nickname| Phone Num|  D.Secret|" << std::endl;
    std::cout << "|__________|__________|__________|__________|__________|__________|" << std::endl;
}

char isten(std::string check, int flag)
{
    if(check.length() >= 10 && flag == 1){
        if(check.length() == 10)
            return(check.at(9));
        return('.');}
    if(flag == 2 && check.length() < 10){return(' ');}
    return(0);
}

static void give_short(std::string str)
{
    std::cout << isten(str, 2) << std::right << std::setw(9) << str.substr(0, 9) << isten(str, 1) << "|";
}

static void short_note(contact people)
{
        give_short(people.get_name());
        give_short(people.get_surname());
        give_short(people.get_nick());
        give_short(people.get_num());
        give_short(people.get_secret());
}

void phonebook::checkerv1()
{
    int n = 0;
    this->printbook();
	while(n < 8 && people[n].get_name() != "")
	{
		std::cout << "|    " << n << "     |";
        short_note(people[n]);
        std::cout<< std::endl << "|__________|__________|__________|__________|__________|__________|" << std::endl;
        n++;
	}
    std::cout << "\nWould you like to see in details (1 for yes / 2 for no) : ";
    int b = this->getnuminput();
    if (b != 1)
    {
        std::cout << ";("<< std::endl;
        return ;
    }
a:
    if(fixed == 0){std::cout << "You don't have a index\n"; return ;}
    std::cout << "\nPlease press index number : ";
	int i = this->getnuminput();
    
    if ((i >= 0 && i <= 7) && i < fixed)
    {
	std::cout << "Name : " << people[i].get_name() << std::endl;
	std::cout << "Surname : " << people[i].get_surname() << std::endl;
	std::cout << "Nickname : " << people[i].get_nick() << std::endl;
	std::cout << "Phone Number : " << people[i].get_num() << std::endl;
	std::cout << "Darkest Secret : " << people[i].get_secret() << std::endl;
    }
    else 
        goto a;
}
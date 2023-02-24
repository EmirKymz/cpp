/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaymaz <ekaymaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 22:30:59 by ekaymaz           #+#    #+#             */
/*   Updated: 2023/01/21 22:31:00 by ekaymaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int go_start(phonebook *book)
{
    int a = 0;
	std::cout << "_____________________________" << std::endl;
    std::cout << "| 1 : Add New Contact       |" << std::endl;
	std::cout << "| 2 : Search                |" << std::endl;
	std::cout << "| 3 : Exit                  |" << std::endl;
	std::cout << "|___________________________|" << std::endl;
	std::cout << "Please press 1 - 3 number : ";
    a = book->getnuminput();
	if(a == -1)
		return (1);
    switch (a)
    {
    case 1:
    {
        book->add();
		break;
    }
    case 2:
    {
		book->checkerv1();
        break;
    }
	case 3:
	{
		std::cout << "Have a nice day good bye" << std::endl;
		return (0);
	}
	default:
	{
		std::cout << "Wrong input please press 1 or 2 or 3 !\n" << std::endl;
        return (1);
	}
    }
	return(1);
}

int main()
{
	phonebook book;
	book.index = 0;
	book.fixed = 0;

	while (1)
	{
		if(!go_start(&book))
			break ;
		else
			continue;
	}
}
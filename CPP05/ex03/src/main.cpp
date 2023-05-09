#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

/* int main(void)
{
	Intern	slave;
	slave.makeForm("NEWNAME", "TARGET");
	Bureaucrat b1("b1", 1);
	Bureaucrat b2("b2", 50);
	Bureaucrat b3("b3", 150);

	std::cout << std::endl;
	try
	{
		Bureaucrat b4("b4", 160);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	
	std::cout << std::endl;
	try{
		std::cout << "===========ShrubberyCreationForm Success Test===========" << std::endl;
		ShrubberyCreationForm s1("Shrubbery");
		s1.beSigned(b1);
		b1.signForm(s1);
		b1.executeForm(s1);
		std::cout << std::endl;
		std::cout << s1 << std::endl;
		std::cout << std::endl << std::endl;
	}
	catch(std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
	try{

		std::cout << "============ShrubberyCreationForm Fail Test============" << std::endl;
		ShrubberyCreationForm s2("Shrubbery");
		s2.beSigned(b3);
		b3.signForm(s2);
		b3.executeForm(s2);
		std::cout << std::endl;
		std::cout << s2 << std::endl;
		std::cout << std::endl << std::endl;
	}
	catch(std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
	try{
		std::cout << "============RobotomyRequestForm Success Test============" << std::endl;
		RobotomyRequestForm r1("Robotomy");
		r1.beSigned(b1);
		b1.signForm(r1);
		b1.executeForm(r1);
		std::cout << std::endl;
		std::cout << r1 << std::endl;
		std::cout << std::endl << std::endl;
	}
	catch(std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try{
		std::cout << "=============RobotomyRequestForm Fail Test=============" << std::endl;
		RobotomyRequestForm r2("Robotomy");
		r2.beSigned(b2);
		b2.signForm(r2);
		b2.executeForm(r2);
		std::cout << std::endl;
		std::cout << r2 << std::endl;
		std::cout << std::endl << std::endl;
	}
	catch(std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try{
		std::cout << "===========PresidentialPardonForm Success Test===========" << std::endl;
		PresidentialPardonForm p1("Presidential");
		p1.beSigned(b1);
		b1.signForm(p1);
		b1.executeForm(p1);
		std::cout << std::endl;
		std::cout << p1 << std::endl;
		std::cout << std::endl << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	
	std::cout << std::endl;
	try{
		std::cout << "============PresidentialPardonForm Fail Test============" << std::endl;
		PresidentialPardonForm p2("Presidential");
		p2.beSigned(b2);
		b2.signForm(p2);
		b2.executeForm(p2);
		std::cout << std::endl;
		std::cout << p2 << std::endl;
		std::cout << std::endl << std::endl;
		}
	catch(std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
} */

/* int main()
{
	try
	{
		
		Intern someRandomIntern;
		Form* rrf;
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
} */

int main(void)
{
	Intern someRandomIntern;
	Form* rrf;

	std::cout << "===========ShrubberyCreationForm Creation Test===========" << std::endl;
	rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
	delete rrf;
	std::cout << std::endl;

	std::cout << "============RobotomyRequestForm Creation Test============" << std::endl;
	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	delete rrf;
	std::cout << std::endl;

	std::cout << "===========PresidentialPardonForm Creation Test===========" << std::endl;
	rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
	delete rrf;
	std::cout << std::endl;

	std::cout << "===============UndefinedForm Creation Test===============" << std::endl;
	rrf = someRandomIntern.makeForm("undefined", "Bender");
	delete rrf;
	std::cout << std::endl;
	
	return 0;
}
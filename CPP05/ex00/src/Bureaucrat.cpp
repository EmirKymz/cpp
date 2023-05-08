#include "Bureaucrat.hpp"


const std::string Bureaucrat::getName(void) const{
    return(this->Name);
}

void Bureaucrat::setGrade(int _grade){
    if(_grade > 150){
        this->Grade = 0;
        throw GradeTooLowException();
    } else if(_grade < 1) {
		this->Grade = 0;
		throw GradeTooHighException();
    } else {
    this->Grade = _grade;
	}
}

int Bureaucrat::getGrade(void) const{
    return(this->Grade);
}

const char *Bureaucrat::GradeTooHighException::what() const throw(){
    return("Grade is must lower than");
}

const char *Bureaucrat::GradeTooLowException::what() const throw(){
    return("Grade is must bigger than");
}

void    Bureaucrat::increment(void){
    this->setGrade(this->getGrade() - 1);
}

void    Bureaucrat::decrement(void){
    this->setGrade(this->getGrade() + 1);
}

Bureaucrat::Bureaucrat(const std::string _name, int _grade): Name(_name) {
    std::cout << "default constructor called" << std::endl;
    this->setGrade(_grade);
}

Bureaucrat::Bureaucrat(const Bureaucrat& copy){
	*this = copy;
}

const Bureaucrat& Bureaucrat::operator=(const Bureaucrat& _copy){
	this->setGrade(_copy.getGrade());
	this->setName(_copy.getName());
	return *this;
}

std::ostream& operator<<(std::ostream& o, const Bureaucrat& b){
	o << b.getName() << ", grade level is " << b.getGrade();
	return(o);
}

void Bureaucrat::setName(std::string _name) {
    const_cast<std::string&>(this->Name) = const_cast<std::string&>(_name);
}

Bureaucrat::~Bureaucrat() { std::cout << "default deconstructor called" << std::endl;}
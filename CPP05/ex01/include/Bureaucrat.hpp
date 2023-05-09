#pragma once

#include <iostream>
#include <string>
#include "Form.hpp"

#define green "\033[1;32m"
#define red "\033[1;31m"
#define white "\033[0m"

class Form;

class Bureaucrat {
    private:
        int Grade;
        const std::string Name;
    public:

        void    increment(void);
        void    decrement(void);
        void    signForm(Form& c);

        Bureaucrat(const std::string _name, int _grade);
        Bureaucrat(const Bureaucrat& copy);
        const Bureaucrat& operator=(const Bureaucrat& _copy);
        ~Bureaucrat();

        const   std::string getName(void) const;
        void    setName(std::string _name);
        int     getGrade(void) const;
        void    setGrade(int _grade);

    class GradeTooHighException: public std::exception {
        public:
            virtual const char *what() const throw();
    };

    class GradeTooLowException: public std::exception {
        public:
            virtual const char *what() const throw();
    };
};

std::ostream& operator<<(std::ostream& o, const Bureaucrat& b);
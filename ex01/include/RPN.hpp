#ifndef RPN_H
#define RPN_H

#include <iostream>
#include <string>
#include <stack>
#include <sstream>
#include <stdexcept>

class RPN {
    private:
        std::stack<double> _stack;

    public:
        RPN() {}
        ~RPN() {}
        const RPN &operator=(const RPN&);
        RPN(const RPN &);
        double evaluate(const std::string& expr);
};

#endif
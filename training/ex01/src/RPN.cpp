#include "RPN.hpp"

double RPN::evaluate(const std::string& expr) {
    std::istringstream iss(expr);
    std::string token;
    while(iss >> token) {
        if(isdigit(token[0])) {
            std::stringstream ss(token);
            double value;
            ss >> value;
            _stack.push(value);
        } else if (token == "+" || token == "-" || token == "*" || token == "/") {
            if (_stack.size() < 2) {
                throw std::runtime_error("Error: not enough operands");
            }
            double rhs = _stack.top();
            _stack.pop();
            double lhs = _stack.top();
            _stack.pop();
            if(token == "+") {
                _stack.push(lhs + rhs);
            } else if (token == "-") {
                _stack.push(lhs - rhs);
            } else if (token == "*") {
                _stack.push(lhs * rhs);
            } else if (token == "/") {
                if (rhs == 0) {
                    throw std::runtime_error("Error: division by zero");
                }
                _stack.push(lhs / rhs);
            }
        } else {
            throw std::runtime_error("Error: invalid token");
        }
    }
    if (_stack.size() != 1) {
        throw std::runtime_error("Error: too many operands");
    }
    double res = _stack.top();
    _stack.pop();
    return res;
}
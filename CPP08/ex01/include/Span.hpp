#pragma once

#include <algorithm>
#include <iostream>
#include <vector>

class Span
{
private:
    unsigned int _maxSize;
    std::vector<int> _numbers;

public:
    Span(unsigned int maxSize);

    void addNumber(int number);
    void addNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end);

    int shortestSpan() const;
    int longestSpan() const;

    class Fullexception : public std::exception {
		public:
			virtual const char *what() const throw() {
				return "Span is full, cannot add more numbers.";
			}
	};
	class OutOffLimits : public std::exception {
		public:
			virtual const char *what() const throw() {
				return "Out off limits.";
			}
	};
};
#pragma once

#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

class OutOfContainer : public std::exception {
    public:
        const char *what() const throw() {
            return "Value not found in the container";
        }
};

template <typename T>
typename T::iterator easyfind(T& container,int value) {
    typename T::iterator it = container.begin();
    typename T::iterator end = container.end();

    while (it != end) {
        if (*it == value) {
            return it;
        }
        ++it;
    }
    throw OutOfContainer();
}
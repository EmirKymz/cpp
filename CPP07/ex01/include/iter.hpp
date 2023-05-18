#pragma once

#include <iostream>
#include <iomanip>

#define YEL "\x1B[33m"
#define BLUE "\x1B[34m"

template <typename Iterator>
void iter(Iterator* arr,  size_t len, void (*func)(Iterator const &)) {
    for(size_t i = 0; i < len; i++) {
        func(arr[i]);
    }
}
#pragma once

#include <iostream>
#include <stdlib.h>
#include <vector>
#include <deque>
#include <chrono>
#include <algorithm>

class PmergeMe {
    public:
        PmergeMe(int ac, char *av[]);
        ~PmergeMe() {}
        void Info_begin(void);
        //Deque
        void mergeDeque(void);
        void mergeInsertionSort(std::deque<int>& values);
        void merge(std::deque<int>& left, std::deque<int>& right, std::deque<int>& result);
        //vector
        void mergeVector(void);
        // void mergeInsertionSort(std::vector<int>& data);
        void mergeInsertionSort(std::vector<int>& data, std::vector<int>& temp, int left, int right);
        void merge(std::vector<int>& data, std::vector<int>& temp, int left, int middle, int right);
    
    private:
        std::vector<int> numbers;
        std::deque<int> deque_num;
        int ac;
};
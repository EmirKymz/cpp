#ifndef PMERGEME_H
#define PMERGEME_H

#include <iostream>
#include <vector>
#include <deque>
#include <cstdlib>
#include <sys/time.h>
#include <cstdio>

class PmergeMe {
    private:
        std::vector<int> vec_num;
        std::deque<int> deq_num;
        int ac;
    public:
        PmergeMe(int ac, char **av);
        void Info_begin(int flag);
        void printtime(timeval tv1, timeval tv2, std::string cont);
        ~PmergeMe() {}

        //Deque
        void mergeDeque(void);
        void mergeInsertionSort(std::deque<int>& values);
        void merge(std::deque<int>& left, std::deque<int>& right, std::deque<int>& result);

        //vector
        void mergeVector(void);
        void mergeInsertionSort(std::vector<int>& data, std::vector<int>& temp, int left, int right);
        void merge(std::vector<int>& data, std::vector<int>& temp, int left, int middle, int right);

};

#endif
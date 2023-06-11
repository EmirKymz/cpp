#include "PmergeMe.hpp"

PmergeMe::PmergeMe(int ac, char *av[]) {
    for (int i = 1; i < ac; i++) {
        int av_num = atoi(av[i]);
        if (av_num < 0)
        {
            std::cerr << "Negative Numbers are forbidden" << std::endl;
            exit(EXIT_FAILURE);
        }
        numbers.push_back(av_num);
    }
    this->ac = ac;
}

void PmergeMe::Info_begin(void) {
    std::cout << "Before ";
    int count = 0;
    for (std::vector<int>::iterator i = numbers.begin(); i != numbers.end(); i++) {
        std::cout << *i << " ";
        count++;
        if (count == 5)
        {
            std::cout << " [...] " << std::endl;
            break;
        }
    }
    if (count != 5)
        std::cout << std::endl;
    
    std::vector<int> sorted_numbers = numbers;
    std::sort(sorted_numbers.begin(), sorted_numbers.end());
    std::cout << "After: ";
    for (std::vector<int>::iterator i = sorted_numbers.begin(); i != sorted_numbers.end(); ++i) {
        std::cout << *i << " ";
        count--;
        if (count == 0)
        {
            std::cout << " [...] " << std::endl;
            break;
        }
    }
    if (count != 0)
        std::cout << std::endl;
    std::copy(numbers.begin(), numbers.end(), std::inserter(deque_num, deque_num.end()));
	#ifdef BUG
    std::cout << "Deque: ";
    
    for (std::deque<int>::iterator i = deque_num.begin(); i != deque_num.end(); ++i) {
        std::cout << *i << " ";
    }
    std::cout << std::endl;
#endif
}
//vector
void PmergeMe::merge(std::vector<int>& data, std::vector<int>& temp, int left, int middle, int right) {
	int i = left, j = middle + 1, k = left;
	while (i <= middle && j <= right) {
		if (data[i] < data[j]) {
			temp[k++] = data[i++];
		} else {
			temp[k++] = data[j++];
		}
	}
	
	while (i <= middle) {
		temp[k++] = data[i++];
	}

	while (j <= right) {
		temp[k++] = data[j++];
	}

	for (k = left; k <= right; k++) {
		data[k] = temp[k];
	}
}

void PmergeMe::mergeInsertionSort(std::vector<int>& data, std::vector<int>& temp, int left, int right) {
    if (left < right) {
        if (right - left < 10) {
            for (int i = left + 1; i <= right; i++) {
                int key = data[i];
                int j = i - 1;
                while (j >= left && data[j] > key) {
                    data[j + 1] = data[j];
                    j--;
                }
                data[j + 1] = key;
            }
        } else {
            int middle = (left + right) / 2;
			mergeInsertionSort(data, temp, left, middle);
			mergeInsertionSort(data, temp, middle + 1, right);
			merge(data, temp, left, middle, right);
        }
    }
}

void PmergeMe::mergeVector(void) {
    std::clock_t start = std::clock();
    std::vector<int> temp(numbers.size());
    mergeInsertionSort(numbers, temp, 0, numbers.size() - 1);
    std::clock_t end = std::clock();
    double elapsed_time = double(end - start) / CLOCKS_PER_SEC * 1000;
    std::cout << "Time to process a range of " << ac << " elements with std::vector : " << std::fixed << elapsed_time << " us." << std::endl;
#ifdef BUG
    for (std::vector<int>::iterator i = numbers.begin(); i != numbers.end(); ++i) {
        std::cout << *i << " ";
    }
    std::cout << std::endl;
#endif
}

void    print(std::deque<int> &list, std::string name) {
    std::cout << name;
    for(std::deque<int>::iterator it = list.begin(); it != list.end(); it++)
        std::cout << *it << " ";
    std::cout << std::endl;
}

//deque
void PmergeMe::merge(std::deque<int>& left, std::deque<int>& right, std::deque<int>& result) {
    while (!left.empty() && !right.empty()) {
        if (left.front() < right.front()) {
            result.push_back(left.front());
            left.pop_front();
        } else {
            result.push_back(right.front());
            right.pop_front();
        }
    }
    while (!left.empty()) {
        result.push_back(left.front());
        left.pop_front();
    }
    while (!right.empty()) {
        result.push_back(right.front());
        right.pop_front();
    }
#ifdef PRINT
    print(result, "merged result : ");
#endif
}

void PmergeMe::mergeInsertionSort(std::deque<int>& values) {
    if (values.size() < 2) {
        return;
    }

    std::deque<int> left, right, result;
    int middle = values.size() / 2;

    for (int i = 0; i < middle; ++i) {
        left.push_back(values[i]);
    }
    for (unsigned int i = middle; i < values.size(); ++i) {
        right.push_back(values[i]);
    }

    mergeInsertionSort(left);
    mergeInsertionSort(right);
#ifdef PRINT
    print(left, "left : ");
    print(right, "right : ");
#endif
    merge(left, right, result);

	std::copy(result.begin(), result.end(), values.begin());
}

void PmergeMe::mergeDeque(void) {
#ifdef BUG
    for (std::deque<int>::iterator i = deque_num.begin(); i != deque_num.end(); i++) {
        std::cout << *i << " ";
    }
    std::cout << std::endl;
#endif 
    std::clock_t start = std::clock();
    mergeInsertionSort(deque_num);
    std::clock_t end = std::clock();
    double elapsed_time = double(end - start) / CLOCKS_PER_SEC * 1000;
    std::cout << "Time to process a range of " << ac << " elements with std::deque : " << std::fixed << elapsed_time << " us." << std::endl;
#ifdef BUG
    for (std::deque<int>::iterator i = deque_num.begin(); i != deque_num.end(); i++) {
        std::cout << *i << " ";
    }
    std::cout << std::endl;
#endif
}
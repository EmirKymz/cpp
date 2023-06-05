#include "Span.hpp"

Span::Span(unsigned int maxSize) : _maxSize(maxSize) {}

void Span::addNumber(int number)
{
    if(number > INT_MAX || number < INT_MIN)
        throw OutOffLimits();
    if (_numbers.size() >= _maxSize)
        throw Fullexception();

    _numbers.push_back(number);
}

void Span::addNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
    unsigned int additionalSize = std::distance(begin, end);
    unsigned int newSize = _numbers.size() + additionalSize;

    if (newSize > _maxSize)
        throw std::runtime_error("Adding these numbers would exceed the maximum size of the Span.");

    _numbers.insert(_numbers.end(), begin, end);
}

int Span::shortestSpan() const
{
    if (_numbers.size() <= 1)
        throw std::runtime_error("Cannot find span, not enough numbers stored.");

    std::vector<int> sortedNumbers = _numbers;
    std::sort(sortedNumbers.begin(), sortedNumbers.end());

    int shortest = sortedNumbers[1] - sortedNumbers[0];
    for (size_t i = 2; i < sortedNumbers.size(); i++)
    {
        int span = sortedNumbers[i] - sortedNumbers[i - 1];
        if (span < shortest)
            shortest = span;
    }

    return shortest;
}

int Span::longestSpan() const
{
    if (_numbers.size() <= 1)
        throw std::runtime_error("Cannot find span, not enough numbers stored.");

    int min = *std::min_element(_numbers.begin(), _numbers.end());
    int max = *std::max_element(_numbers.begin(), _numbers.end());

    return max - min;
}
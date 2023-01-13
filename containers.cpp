#include <vector>
#include <iostream>
#include <map>
using namespace std;

int main()
{

    int arr[] = {5,8,94,2,645,745,623};

    vector<int> vec(arr, arr + 7);
    vector<int>::iterator it = vec.begin();
    while (it != vec.end())
    {
        cout << *it << " ";
        it++;
    }
}
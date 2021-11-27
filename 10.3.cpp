#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int main()
{
    vector<int> vec = {1, 2, 1, 5, 6};
    int sum = accumulate(vec.begin(), vec.end(), 0);
    cout << sum;
}
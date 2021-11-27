#include <iostream>
#include <vector>
#include <numeric>
#include <iterator>
using namespace std;

int main()
{
    vector<int> a(10);
    fill_n(a.begin(), a.size(), 0);
    return 0;
}
#include <iostream>
#include <vector>
#include <list>
using namespace std;

int main()
{
	int a[] = { 0,1,1,2,3,5,8,13,21,55,89 };
	const int N = 10;
	vector<int> vec; vec.assign(a, a+11);
	list<int> li; li.assign(a, a + 11);//assign(pointer1,pointer2)
	auto it1 = vec.begin();
	while (it1 != vec.end()) {
		if (*it1% 2 == 0) it1 = vec.erase(it1);
		else it1++;
	}
	auto it2 = li.begin ();
	while (it2 != li.end()) {
		if (*it2 % 2 != 0) it2++;
		else it2 = li.erase(it2);
	}
}
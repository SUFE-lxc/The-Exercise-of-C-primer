#include <iostream>
#include <list>
#include <string.h>
#include <deque>
using namespace std;

int main()
{
	list<int> list1 = { 1,2,3,4,5,6,7,8 };
	deque<int> d1, d2;
	auto it1 = list1.cbegin(); auto it2 = list1.cend();
	while (it1 != it2) {
		if (*it1 % 2 == 0)
			d1.push_back(*it1);
		else d2.push_back(*it1);
		++it1;
	}
}
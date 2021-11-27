#include <iostream>
#include <list>
#include <vector>
using namespace std;

bool CompareValue2(vector<int>, list<int>);
int main()
{
	list<int> list1= { 1,2,3,4 };
	vector<int> vec = { 1,2,3,5 }; 
	CompareValue2(vec, list1);
}
bool CompareValue2(vector<int> vec, list<int> list1)
{
	if (vec.size() != list1.size()) return false;//若元素数量不等 直接return false
	auto it1 = vec.cbegin();
	auto it2 = vec.cend();
	auto it3 = list1.cbegin();
	for (; it1 != it2; ++it1, ++it3)
		if (*it1 != *it3)
			return false;
	return true;
}
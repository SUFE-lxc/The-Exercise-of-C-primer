#include <iostream>
#include <vector>
#include <forward_list>
#include <string>
using namespace std;

int main()
{
	forward_list<int> list = { 1,2,3,4,5,6,7,8,9 };
	auto it1 = list.begin(); auto it0 = list.before_begin();
	while (it1 != list.end()) {
		if (*it1 % 2 != 0)
		{
			it1 = list.erase_after(it0);
			it0++;
		}
		//删除p0后面的一个元素 并返回被删元素后面的一个迭代器
		else {
			it1++; it0++;
		}
	}
}
void search_and_insert(forward_list<string> list, string str1, string str2)
{
	auto it0 = list.before_begin();
	auto it1 = list.begin();
	while (it1 != list.end()) {
		if (*it1 == str1) {
			list.insert_after(it1, str2);
			return;
		}
		else it1++;
	}
	list.insert_after(list.end(), str2);
	//insert(iterator,p)/insert(iterator,n,t)/insert(iterator,iteratorb,iteratore)
	
	
}
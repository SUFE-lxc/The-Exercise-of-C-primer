/*
#include <iostream>
#include <algorithm>
#include <vector>
#include <list>

using namespace std;

int  main()
{
	vector<int> vec = { 1,2,3,4,5,5,5,5,6,7,8 };
	list<int> l; 
	unique_copy(vec.begin(), vec.end(), back_inserter(l));

	for (auto i : l)
		cout << i << endl;

	vector<int> test1, test2, test3;//分别使用三种插入迭代器拷贝
	copy(vec.begin(), vec.end(), back_inserter(test1));
	copy(vec.begin(), vec.end(), front_inserter(test2));//错误代码 vector不支持push_front
	copy(vec.begin(), vec.end(), inserter(test3,test3.begin()));

}
*/
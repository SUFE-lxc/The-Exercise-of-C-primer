#include <iostream>
#include <vector>
#include <iterator>
using namespace std;
//9.4的改进

vector<int>::const_iterator Findvalue(vector<int>::const_iterator, vector<int>::const_iterator, int);
int main()
{
	vector<int> vec(10, 0);
	auto it1 = vec.cbegin();
	auto it2 = vec.cend();
	Findvalue(it1, it2, 3);
}
vector<int>::const_iterator Findvalue(vector<int>::const_iterator it1, vector<int>::const_iterator it2, int a)
{
	while (it1 < it2)
	{
		if (*it1 == a)
			return it1;
		else it1++;
	}
	return it2;//搜索失败返回尾后迭代器
}

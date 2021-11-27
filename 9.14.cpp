#include <iostream>
#include <vector>
#include <string>
#include <list>
using namespace std;
int main()
{
	list<string> l = { "231","sa","SDAS"};
	vector<int> vec(l.begin(), l.end());//范围初始化
	//容器类型不同，但容器内元素类型相同
	vec.assign(l.begin(), l.end());//修改元素
	
}
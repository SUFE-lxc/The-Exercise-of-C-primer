#include <iostream>
#include <string>
#include <vector>
#include <iterator>
using namespace std;

void TestF(string&, string, string);
void TestF2(string&, string, string);
int main()
{
	string s = "sufesufesufeisbest";
	string oldval = "sufe";
	string newval = "pku";
	TestF(s, oldval, newval);
	cout << s;
	return 0;
}
void TestF(string &s, string oldval, string newval)
{//old和new都不为空的情况下
	auto iter = s.begin(), it = s.end();
	while (iter <= s.end() - oldval.size()) {//末尾少于oldval的长度无需检查
		auto iter1 = iter;//记录初始迭代器，用于迭代
		auto iter2 = oldval.begin();
		while (iter2 != oldval.end() && *iter2 == *iter1)
		{
			iter1++; iter2++;
		}
		if (iter2 == oldval.end())
		{
			iter = s.erase(iter, iter1);//delete [iter,iter1)  AND iter = iter1
			iter = s.insert(iter, newval.begin(), newval.end());//iter指向insert的字符串中的第一个元素
			iter += newval.size();//更新起始迭代器，即跳到新字符串的后面
		}
		else iter++;
		
	}
}
void TestF2(string& s, string oldval, string newval)
{//使用replace函数，参数选择为下标＋长度
	int i = 0;
	while (i <= s.size() - oldval.size()) {
		int n = i;
		int j = 0;
		while (j <= oldval.size() && oldval[j] == s[n]) {
			++n; ++j;
		}
		if (j == 4) {
			s.replace(i, oldval.size(), newval);
			i += newval.size();
		}
		else i++;
	}
}
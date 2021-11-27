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
{//old��new����Ϊ�յ������
	auto iter = s.begin(), it = s.end();
	while (iter <= s.end() - oldval.size()) {//ĩβ����oldval�ĳ���������
		auto iter1 = iter;//��¼��ʼ�����������ڵ���
		auto iter2 = oldval.begin();
		while (iter2 != oldval.end() && *iter2 == *iter1)
		{
			iter1++; iter2++;
		}
		if (iter2 == oldval.end())
		{
			iter = s.erase(iter, iter1);//delete [iter,iter1)  AND iter = iter1
			iter = s.insert(iter, newval.begin(), newval.end());//iterָ��insert���ַ����еĵ�һ��Ԫ��
			iter += newval.size();//������ʼ�����������������ַ����ĺ���
		}
		else iter++;
		
	}
}
void TestF2(string& s, string oldval, string newval)
{//ʹ��replace����������ѡ��Ϊ�±꣫����
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
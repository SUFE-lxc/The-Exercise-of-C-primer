#include <iostream>
#include <vector>
#include <string>
#include <list>
using namespace std;
int main()
{
	list<string> l = { "231","sa","SDAS"};
	vector<int> vec(l.begin(), l.end());//��Χ��ʼ��
	//�������Ͳ�ͬ����������Ԫ��������ͬ
	vec.assign(l.begin(), l.end());//�޸�Ԫ��
	
}
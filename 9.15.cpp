#include <iostream>
#include <vector>
#include <string>
using namespace std;
//�Ƚ�����vector�Ƿ����(string)

bool CompareValue(vector<string>, vector<string>);
int main()
{
	vector<string> v1 = { "das","s","sd" };
	vector<string> v2 = {"sda","fd"};
	CompareValue(v1, v2);
	
}

bool CompareValue(vector<string> v1, vector<string> v2)
{
    int l1 = v1.size();
	int l2 = v2.size();
	if (l1 != l2) return false;
	if (v1[0] != v2[0]) return false;
	else
	{
		v1.erase(v1.begin()); v2.erase(v2.begin());//�����һ��Ԫ��
		return CompareValue(v1, v2);//�ݹ����
	}
	return true;
}





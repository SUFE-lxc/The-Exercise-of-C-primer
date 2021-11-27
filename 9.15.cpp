#include <iostream>
#include <vector>
#include <string>
using namespace std;
//比较两个vector是否相等(string)

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
		v1.erase(v1.begin()); v2.erase(v2.begin());//清除第一个元素
		return CompareValue(v1, v2);//递归调用
	}
	return true;
}





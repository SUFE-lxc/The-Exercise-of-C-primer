#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> iv = { 1,2,3,4,5,6,7,8,9 };
	const int some_value = 1;
	vector<int>::iterator iter = iv.begin();
	int Size = iv.size(); int n = 0;
	while (iter != (iter + Size / 2 + n)) {
		if (*iter == some_value) {
			iter = iv.insert(iter, 2 * some_value);//����˳��������insertԪ�ط��ص�ǰԪ��֮ǰ��������ֵ��λ����+2������һ��Ԫ�ص�λ��
				n++; iter++; iter++;
		}
		else iter++;
	}
}
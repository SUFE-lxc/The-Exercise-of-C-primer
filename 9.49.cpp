#include <iostream>
#include <string>
#include <fstream>

using namespace std;

void FindLongestWord(ifstream& in);

int main(int argc,char *argv[])
{
	ifstream in(argv[1]);//���ļ�
	if (!in) {
		cerr << "Can not open the file" << endl;
		return -1;
	}
	FindLongestWord(in);
	return 0;
}
void FindLongestWord(ifstream& in)
{
	string s, LongestWord;
	int MaxLength;
	while (in >> s) {
		if (s.find_first_of("bdfghjklpqty") != string::npos)
			continue;//��������ָ����ĸ�ĵ���ֱ������
		cout << s << endl;
		if (MaxLength < s.size())
		{
			MaxLength = s.size();
			LongestWord = s;
		}
	}
	cout << LongestWord;
}
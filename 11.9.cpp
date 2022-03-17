#include <iostream>
#include <fstream>
#include <sstream>
#include <map>
#include <list>
#include <string>
#include <algorithm>

using namespace std;

string& transform(string& s);

int main()
{
	ifstream in;//�����ļ�
	map<string, list<int>> word_line_Count;//��¼�����к�
	string word;//�ؼ���
	string line;
	int rowNo = 0;//�к�
	while (getline(in, line))
	{//���ж�ȡ
		rowNo++;
		istringstream s_in(line);//�����ַ�������һ�������ȡ����
		while (s_in >> word) {
			transform(word);//ת���ɱ�׼����
			word_line_Count[word].push_back(rowNo);
		}
	}
	for (const auto& w : word_line_Count) {
		cout << w.first << "������Ϊ��";
		for (const auto& i : w.second)
			cout << i << " ";
	}`
	cout << endl;
}

string& transfrom(string& s)
{//����д��ĸת����Сд
	for (int p = 0; p < s.size(); ++p) {
		if (s[p] >= 'A' && s[p] <= 'Z')
			s[p] = tolower(s[p]);
		else if (s[p] == ',' || s[p] == '.')
			s.erase(p, 1);//ɾ������
	}
	return s;
}
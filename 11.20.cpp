#include <iostream>
#include <fstream>
#include <sstream>
#include <map>
#include <list>
#include <string>
#include <algorithm>
#include <utility>

using namespace std;

int main()
{//���ʼ���
	map<string, size_t> word_count;
	string word;
	while (cin >> word)
	{
		auto temp = word_count.insert({ word,1 });//�������
		if (!temp.second)//�������û�н���
			++temp.first->second;
	}
	for (const auto& w : word_count)
		cout << w.first << "������" << w.second;
}
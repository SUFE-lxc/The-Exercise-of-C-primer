/*
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void elimDups(vector<string>&);
bool isShorter(const string&, const string&);//ν��

int main() {
	vector<string> words = { "lxc","sufe","computer","science" ,"lxc" };
	elimDups(words);//ȥ���ظ�Ԫ��
	stable_sort(words.begin(), words.end(), isShorter);
	for (const auto temp : words)
		cout << temp << endl;
}
void elimDups(vector<string>& words)
{//ɾ���ظ�Ԫ��
	sort(words.begin(), words.end());//����
	auto newend = unique(words.begin(), words.end());
	words.erase(newend, words.end());
}

bool isShorter(const string& s1, const string& s2)
{//����������
	return s1.size() < s2.size();
}
*/
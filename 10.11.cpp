/*
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void elimDups(vector<string>&);
bool isShorter(const string&, const string&);//谓词

int main() {
	vector<string> words = { "lxc","sufe","computer","science" ,"lxc" };
	elimDups(words);//去除重复元素
	stable_sort(words.begin(), words.end(), isShorter);
	for (const auto temp : words)
		cout << temp << endl;
}
void elimDups(vector<string>& words)
{//删除重复元素
	sort(words.begin(), words.end());//排序
	auto newend = unique(words.begin(), words.end());
	words.erase(newend, words.end());
}

bool isShorter(const string& s1, const string& s2)
{//按长度排序
	return s1.size() < s2.size();
}
*/
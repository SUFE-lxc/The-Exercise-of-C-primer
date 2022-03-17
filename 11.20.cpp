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
{//单词计数
	map<string, size_t> word_count;
	string word;
	while (cin >> word)
	{
		auto temp = word_count.insert({ word,1 });//插入操作
		if (!temp.second)//插入操作没有进行
			++temp.first->second;
	}
	for (const auto& w : word_count)
		cout << w.first << "出现了" << w.second;
}
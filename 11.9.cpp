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
	ifstream in;//传入文件
	map<string, list<int>> word_line_Count;//记录单词行号
	string word;//关键字
	string line;
	int rowNo = 0;//行号
	while (getline(in, line))
	{//按行读取
		rowNo++;
		istringstream s_in(line);//构造字符串流，一行逐个提取单词
		while (s_in >> word) {
			transform(word);//转换成标准类型
			word_line_Count[word].push_back(rowNo);
		}
	}
	for (const auto& w : word_line_Count) {
		cout << w.first << "所在行为：";
		for (const auto& i : w.second)
			cout << i << " ";
	}`
	cout << endl;
}

string& transfrom(string& s)
{//将大写字母转化成小写
	for (int p = 0; p < s.size(); ++p) {
		if (s[p] >= 'A' && s[p] <= 'Z')
			s[p] = tolower(s[p]);
		else if (s[p] == ',' || s[p] == '.')
			s.erase(p, 1);//删除符号
	}
	return s;
}
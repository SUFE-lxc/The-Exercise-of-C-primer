#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void biggies(vector<string>&, vector<string>::size_type);
void elimDups(vector<string>&);

int main()
{
	vector<string> words = { "lxclxc","sufesufe","pku","computer science","lxc" };
	int i;
	cin >> i;
	biggies(words, i);
}

void biggies(vector<string>& words, vector<string>::size_type sz)
{
	elimDups(words);//删除重复单词
	stable_sort(words.begin(), words.end(), [](const string& a, const string& b) ->int {return a.size() < b.size(); });
	//按长度稳定排序
	auto it = find_if(wor,ds.begin(), words.end(), [sz](const string& a) {return a.size() >= sz; });
	//返回第一个size大于等于sz的元素的迭代器
	//可以用partition代替sort和find_if函数 partition使其排序好并返回迭代器
	
	auto number = words.end() - it;
	cout << "the total number of the words whose length >=" << sz << "is" << number << endl;
	for_each(it, words.end(), [](const string& s) {cout << s << " "; });
	cout << endl;
}

void elimDups(vector<string>& words)
{//删除重复元素
	sort(words.begin(), words.end());//排序
	auto newend = unique(words.begin(), words.end());
	words.erase(newend, words.end());
}
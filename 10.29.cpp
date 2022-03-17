/*
#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>
#include <list>
#include <fstream>
#include <string>

using namespace std;

int main(int argc, char* argv[])
{//10.29
	ifstream in(argv[1]);
	if (!in) {//检验是否为空或不存在
		cerr << "打开文件失败" << endl;
		exit(1);//异常退出 终止进程   exit(0)为正常退出
	}
	istream_iterator<string> in_iter(in)
										,eof;//尾后迭代器
	vector<string> words;
	while (in_iter != eof)
		words.push_back(*in_iter++);

	for (auto i : words)
		cout << i << endl;
}
*/
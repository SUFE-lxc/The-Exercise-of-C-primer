/*
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void test(int);

int main()
{
	vector<string> words = { "lxclxc","sufesufe","pku","computer science","lxc" };
	int numbers = count_if(words.begin(), words.end(),
		[](const string& s) ->int {//函数体非纯返回语句 需要加尾置返回类型
			int i = 0;
			if (s.size() > 6)
				i++;
			return i;
		});
}

void test(int a)
{
	auto f = [=]()mutable->bool {
		if (a > 0) {
			a--;
			return false;
		}
		else
			return true;
	};
}
*/
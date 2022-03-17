/*
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool isShorter(const string&);

int main() {
	vector<string> vec = { "lxclxc","sufe","Computer science","pku" };
	auto it = partition(vec.begin(),vec.end(),isShorter);
	for (; it != vec.end(); ++it)
		cout << *it << endl;
}

bool isShorter(const string& s1)
{
	return s1.size() < 5;
}
*/
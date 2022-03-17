#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>
#include <list>
#include <fstream>
#include <string>

using namespace std;

int main(int argc, char* argv[])
{
	istream_iterator<int> in_iter(cin), eof;
	vector<int> result;
	while (in_iter != eof)
		result.push_back(*in_iter++);
	
	sort(result.begin(), result.end());
	
	ostream_iterator<int> out_iter(cout, " ");
	copy(result.begin(), result.end(), out_iter);
	}
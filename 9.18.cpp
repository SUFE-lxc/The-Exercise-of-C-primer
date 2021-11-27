#include <iostream>
#include <list>
#include <string.h>
using namespace std;

int main()
{
	string str;
	list<string> list1;
	while (cin >> str)
		list1.push_back(str);//Store in list,but we also can use insert function because of the list class can be inserted in any positions easily 
	//print one by one
	for (auto it = list1.cbegin(); it != list1.end(); ++it)
	{
		cout << *it << endl;
	}
}
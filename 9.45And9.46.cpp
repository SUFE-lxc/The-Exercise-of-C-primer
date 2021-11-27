#include <iostream>
#include <string>

using namespace std;

string function(string&, string&, string&);
string function2(string&, string&, string&);
int main()
{
	string name("lxc");
	string pre("sufe");
	string suf("nb");
	cout << function(name, pre, suf) << endl;
}
string function(string& name, string& pre, string& suf)
{
	name.append(" ");
	name.append(suf.begin(), suf.end());
	name.insert(name.begin(), 1, ' ');
	name.insert(name.begin(), pre.begin(),pre.end());
	return name;
}
string function2(string& name, string& pre, string& suf)
{
	name.insert(name.size(), " ");
	name.insert(name.size(), suf);
	name.insert(0, " ");
	name.insert(0, pre);
	return name;
}
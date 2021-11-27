#include <iostream>
#include <string>

using namespace std;

void FindChar(string&, const string&);
int main()
{
	string gogal = "ab2c3d7R4E6";
	FindChar(gogal, "0123456789");
	FindChar(gogal, "QWERTYUIOPASDFGHJKLZXCVBNMqwertyuiopasdfghjklzxcvbnm");
}
void FindChar(string& gogal, const string& chars)
{
	string::size_type pos = 0;
	while ((pos = gogal.find_first_of(chars, pos)) != string::npos) {
		//’“µΩ
		cout << "pos:" << pos << ",char:" << gogal[pos] << endl;
		pos++;
	}
}
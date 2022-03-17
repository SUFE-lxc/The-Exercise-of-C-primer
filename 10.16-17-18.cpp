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
	elimDups(words);//ɾ���ظ�����
	stable_sort(words.begin(), words.end(), [](const string& a, const string& b) ->int {return a.size() < b.size(); });
	//�������ȶ�����
	auto it = find_if(wor,ds.begin(), words.end(), [sz](const string& a) {return a.size() >= sz; });
	//���ص�һ��size���ڵ���sz��Ԫ�صĵ�����
	//������partition����sort��find_if���� partitionʹ������ò����ص�����
	
	auto number = words.end() - it;
	cout << "the total number of the words whose length >=" << sz << "is" << number << endl;
	for_each(it, words.end(), [](const string& s) {cout << s << " "; });
	cout << endl;
}

void elimDups(vector<string>& words)
{//ɾ���ظ�Ԫ��
	sort(words.begin(), words.end());//����
	auto newend = unique(words.begin(), words.end());
	words.erase(newend, words.end());
}
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
	if (!in) {//�����Ƿ�Ϊ�ջ򲻴���
		cerr << "���ļ�ʧ��" << endl;
		exit(1);//�쳣�˳� ��ֹ����   exit(0)Ϊ�����˳�
	}
	istream_iterator<string> in_iter(in)
										,eof;//β�������
	vector<string> words;
	while (in_iter != eof)
		words.push_back(*in_iter++);

	for (auto i : words)
		cout << i << endl;
}
*/
#include<iostream>
#include<vector>
#include<fstream>
#include<map>
using namespace std;

int main(int num,char* str[])
{
  string word;
	fstream file;
	file.open(str[1], ios::in);
	getline(file, word);
	cout << word << endl;
}

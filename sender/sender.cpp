#include<iostream>
#include<vector>
#include<fstream>
#include<map>
using namespace std;

int main()
{
  	string word;
	fstream file;
	file.open("sample-review/test.csv", ios::in);
	getline(file, word);
	cout << word << endl;
}

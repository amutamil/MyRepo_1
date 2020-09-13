#include<iostream>
#include<vector>
#include<fstream>
#include<map>
using namespace std;

int main(int num,char* argv[])
{
  	string word;
	fstream file;
	file.open(argv[1], ios::in);
	getline(file, word);
	cout << word<<num << endl;
}

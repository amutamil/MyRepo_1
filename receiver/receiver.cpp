#include<iostream>
#include<fstream>
#include<sstream>
using namespace std;

void pushIntoCsv(string str);

void pushIntoCsv(string s1)
{
  fstream file;
    file.open("output.csv", ios::out | ios::app);
    file << s1<<endl;
}

int main()
{
  string str;
  while(getline(cin,str))
  {
    cout<<str<<endl;
    pushIntoCsv(str);
  }
  return 0;
}

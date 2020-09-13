#include<iostream>
#include<fstream>
#include<vector>
#include<sstream>
using namespace std;
bool checkExceptions(string s);

bool checkExceptions(string s)
{
  string arr[3]={"filename not passed as argument","file cannot be opened","file is empty"};
  for(unsigned int i=0;i<3;i++)
  {
    if(s==arr[i])
    {
      return true;
    }
  }
  return false;
}

int main()
{
  string s1;
  getline(cin,s1);
  if(checkExceptions(s1))
  {
    cout<<s1;
    return 0;
  }
  while(getline(cin,s1))
  {
    cout<<s1<<endl;
  }
  return 0;
}

#include<iostream>
#include<fstream>
#include<vector>
#include<sstream>
#include "functions.h"
using namespace std;
using namespace functions;


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

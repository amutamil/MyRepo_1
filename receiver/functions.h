#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<iterator>
#include<algorithm>
#include<fstream>
#include<sstream>
using namespace std;

namespace functions
{

  bool checkExceptions(string s)
  {
  string arr[3]={"filename not passed as argument","file cannot be opened","file is empty"};
  for(unsigned int i=0;i<3;i++)
  {
    if(s==arr[i])
      return true;
  }
  return false;
  }
}

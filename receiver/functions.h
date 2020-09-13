#include<iostream>
#include<string>
#include<vector>
#include<unordered_map>
#include<cctype>
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
  
  void removeNums(string& s1)
  {
    s1.erase(remove_if(s1.begin(), s1.end(), ::iswdigit), s1.end());
  }
    
  void removeSpecialChar(string& s1)
  {
     s1.erase(remove_if(s1.begin(), s1.end(), ::iswpunct), s1.end());
  }
  
  void ToLowerChar(string& s1)
  {
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
  }
  
}

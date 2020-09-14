#include "functions.h"
using namespace functions;


int main()
{
  string s1;    unordered_map<string, int> m;

  getline(cin,s1);
  
  if(checkExceptions(s1))
  {
    cout<<s1;
    return 0;
  }
  
  while(getline(cin,s1))
  {
     removeNums(s1);
     removeSpecialChar(s1);
     ToLowerChar(s1);
     removeStopWords(s1);
      cout<<s1<<endl;
     //pushIntoMap(s1,m);
  }
  printmap(m);
  return 0;
}


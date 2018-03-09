//Leetcode 389 Find the Difference

#include <vector>
#include <string>
using namespace std;
class Solution {
public:
    char findTheDifference(string s, string t) {
	  vector<int> lettercount(26,0);
	  
	  for(int i = 0;i < s.length();i ++)
	  {
	      lettercount[s[i] - 'a'] ++;
	  }
	  for(int i = 0; i < t.length();i ++)
	  {
	      lettercount[t[i] - 'a'] --;
	      if(lettercount[t[i] - 'a'] < 0)
		  return t[i];
	  }
	  
    }
     char findTheDifference1(string s, string t) {
	  char c = 0;
	  for(int i = 0;i < s.length();i ++)
	  {
	      c ^= s[i];
	  }
	  for(int i = 0; i < t.length();i ++)
	  {
	      c ^= t[i];
	  }
	  return c;
	  
    }
    char findTheDifference2(string s, string t) //to learn
    {
        char c = 0;
        
        for (auto ch : s) c ^= ch;
        for (auto ch : t) c ^= ch;
        
        return c;
    }
};

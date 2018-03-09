//Leetcode 242 Valid Anagram
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t)//too slow
    {
	  
	sort(s.begin(),s.end());
	sort(t.begin(),t.end());
	return (s == t);
    }
    bool isAnagram2(string s, string t) //faster
    {
	vector<int> lettercount(26,0);
	if(s.length() != t.length())
	  return false;
	for(int i = 0;i < s.length();i ++)
	  lettercount[s[i] - 'a'] ++;
	
	for(int i = 0;i < t.length();i ++)
	{
	    lettercount[t[i] - 'a'] --;
	    if(lettercount[t[i] - 'a'] < 0)
	      return false;
	}
	
	return true;
	
    }
    
};